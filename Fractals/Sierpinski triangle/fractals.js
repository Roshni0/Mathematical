const TRIANGLECOORD = [[0,0],[900,0],[450,450*1.730]];
class Triangle {
    constructor(a,b,c) { 
        this.a = a;
        this.b = b;
        this.c = c; 
    }
    Split() {
        let a = this.a;
        let b = this.b;
        let c = this.c;
        let newTris= [new Triangle(a,this.MidPoint(a,b),this.MidPoint(a,c)),new Triangle(b,this.MidPoint(b,a),this.MidPoint(b,c)),new Triangle(c,this.MidPoint(c,a),this.MidPoint(c,b))]
        return newTris;
    }
    MidPoint(x,y) {
        let calc = [(x[0]+y[0])/2,(x[1]+y[1])/2,(x[2]+y[2])/2];
        return calc;
    }
}
function InitTrian(level) {
    let tris = [new Triangle([1,0,0],[0,1,0],[0,0,1])];
  for (let i = 0; i < level; i++){
        let tristemp = tris;
        tris = [];
        for (let k = 0; k < tristemp.length; k++){
            tris = tris.concat(tristemp[k].Split());   
        }
    }
    return tris;
}
function InitRandTri(coord) {
    let i = Math.floor(Math.random() * coord.length)
	let tri = coord[i];
	if (tri[0][1] < tri[1][1]){
		[tri[0],tri[1]] = [tri[1],tri[0]]
	}
	else if (tri[0][1] < tri[2][1]){
		[tri[0],tri[2]] = [tri[2],tri[0]]
	}
	if (tri[1][0] > tri[2][0]) {
		[tri[1],tri[2]] = [tri[2],tri[1]]
	}
    return tri;
}
function InitCoordin(a,b,c,tris) {
	let coord = [];
	for (let i = 0; i < tris.length; i++){
		let cTri = [];
		cTri.push(Vis(a,b,c,tris[i].a));
		cTri.push(Vis(a,b,c,tris[i].b));
		cTri.push(Vis(a,b,c,tris[i].c));
		coord.push(cTri);
	}
	return coord;
}
function InitPoint() {
    let temp = TRIANGLECOORD.slice();
    return temp[Math.floor(Math.random() * 3)];
}
function Vis(a,b,c,p) {
    let x = a[0]*p[0]+b[0]*p[1]+c[0]*p[2];
    let y = a[1]*p[0]+b[1]*p[1]+c[1]*p[2];
    return [x,y];
}
function Draw() {
    this.ctx.clearRect(-20,-10, this.canvas.height+25, this.canvas.width+10);
    DrawTriangles(ctx,coords);
  Triangle(ctx,shaded);
}
function DrawTriangles(ctx, coord) {
	ctx.strokeStyle = "black";
    for (let i = 0; i <coord.length; i++){
        ctx.beginPath();
        ctx.moveTo(coord[i][0][0],coord[i][0][1]);
        ctx.lineTo(coord[i][1][0],coord[i][1][1]);
        ctx.lineTo(coord[i][2][0],coord[i][2][1]);
        ctx.lineTo(coord[i][0][0],coord[i][0][1]);
        ctx.stroke();
    }
}
function ShadeTriangle(ctx,tri) {
    ctx.fillStyle = "white"
    ctx.beginPath();
    ctx.moveTo(tri[0][0],tri[0][1]);
    ctx.lineTo(tri[1][0],tri[1][1]);
    ctx.lineTo(tri[2][0],tri[2][1]);
    ctx.lineTo(tri[0][0],tri[0][1]);
    ctx.fill();
}
var canvas = document.getElementById('Canvas');
var ctx = canvas.getContext('2d');
    canvas.tabIndex = 0;
    ctx.translate(20,canvas.height-10);
    ctx.scale(1,-1);
var tris = InitTrian(4);
var coords = InitCoordin(TRIANGLECOORD[0],TRIANGLECOORD[1],TRIANGLECOORD[2],tris);
var shaded = InitRandTri(coords);
var point = InitPoint();

Draw();
