def main():
    q = int(input())
    if q == 1:
        print("2")
    else:
        
        print(2 if q % 2 == 0 else q)

if __name__ == "__main__":
    main()
