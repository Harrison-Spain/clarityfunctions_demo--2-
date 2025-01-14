import ctypes
import os

# Load the DLL
dll_path = os.path.join(os.getcwd(), 'clarityfunctions.dll')
clarity_functions = ctypes.CDLL(dll_path)

# Define the functions

setMessage = clarity_functions.setMessage
setMessage.argtypes = [ctypes.c_char_p]
setMessage.restype = None

deleteMsg = clarity_functions.deleteMsg
deleteMsg.argtypes = [ctypes.c_char_p]
deleteMsg.restype = None

printMessage = clarity_functions.printMessage
printMessage.argtypes = []
printMessage.restype = None

if __name__ == "__main__":
    # Demonstrate the functionality
    message = b"This message has been loaded from Python and will be printed by the C++ code."
    setMessage(message)
    printMessage()
