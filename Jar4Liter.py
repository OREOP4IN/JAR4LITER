# DEOVIE LENTERA HIKMATULLAH 18320037

# Program Jar4Liter

jarA = 0
jarB = 0

isFour = False

while not isFour:

    print("Jar B needs to have 4L of water")
    print('status: \n A:', jarA, '\n B:', jarB)
    print('option: \n   1. Fill jar A \n   2. Fill jar B \n   3. Empty jar A \n   4. Empty jar B \n   5. Pour jar A to B \n   6. Pour jar B to A \n   7. Restart')
    print('')
    options = input('What will you do? ')

    if (options == '1'):
        jarA = 3

    elif (options == '2'):
        jarB = 5

    elif (options == '3'):
        jarA = 0    

    elif (options == '4'):
        jarB = 0  

    elif (options == '5'):
        totalVol = jarA + jarB
        jarA = max((totalVol - 5), 0)
        jarB = min(5, totalVol)

    elif (options == '6'):
        totalVol = jarA + jarB
        jarB = max((totalVol - 3), 0)
        jarA = min(3, totalVol)

    elif (options == '7'):
        jarA = 0
        jarB = 0
 
    elif (options == '8'):  #cheat
        jarB = 4

    if jarB == 4:
        isFour = True
        print('')
        print('status: \n A:', jarA, '\n B:', jarB)
        print('')
        print('-----------------------------------------------')
        print('                CONGRATULATIONS')
        print('                   YOU WON!')
        print('-----------------------------------------------')
    print('')
