require CaesarCipher.py
cipher = CaesarCipher(3)
message = "Hello, this is Bob"
coded = cipher.encrypt(message)
print('Secret: ', coded)
answer = cipher.decrypt(coded)
print('Message: ',answer)
