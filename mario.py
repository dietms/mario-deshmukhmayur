'''CS50 PSet 1-C: Mario'''
def main(n):
    if n >= 1 and n <= 23:
        for i in range(2,n+2):
            print(' '*(n+1-i), end='')
            print('#'*i)

if __name__ == '__main__':
    no_of_lines = int(input('Enter a number: ').strip())
    main(no_of_lines)
