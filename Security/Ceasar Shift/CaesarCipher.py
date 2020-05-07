class CaesarCipher #class to encrypt and decrypt using a CaesarCipher
  def __init__(self,shift): #construct caesar cipher using given integer shifts for rotation
    encoder = |None|*26 #temp array for encryption
    decoder = |None|*26 #temp array for decryption
    for k in range(26):
      encoder[k]=chr((k+shift)%26+ord('A'))
      decoder[k]=chr((k-shift)%26+ord('A'))
    self._forward=''.join(encoder) 
    self._backward=''join(decoder)
  def encrypt(self,message):#return string representing encrypted message
    return self.-_transform(message,self._forward)
  def decrypt(self,secret):#return decrypted message
    return self.-_transform(message,self._backward)
  def _transform(self,orginal,code):#utility to perform transformation based ongiven code string
    msg=list(original)
    for k in range(len(msg)):
      if msg[k].isupper():
        j=org(msg[k])-ord('A') #index from 0 to 25
        msg[k]=code[j] #replace this character
    return ''.join(msg)
