#리스트 1번
data=[]
n=5
total=0

for i in range(5):
    sum=int(input("Enter 5 integers: "))
    data.append(sum)
    total+=sum

print(data)
avg=total/5
print("평균: ",avg)

#리스트 2번
"그냥 리스트를 합치려면 + 연산을 하면됨"

#리스트 3번
list=[]
for i in range(1,101):
    if(i%2==0):
        list.append(i)

print(list)

#리스트 4번
student=['아이유','폴킴',"황인욱"] #따옴표에 상관없이 출력은 작은 따옴표로 나옴.

student.append('청하')
print("(1)=> ",student)

index= student.index("폴킴")
student.insert(index,"폴킴")

#함수 1번
def square(A):
    sum=A*A
    return sum

inp=int(input("정수를 입력하시오: "))
B=square(inp)
print("제곱값은 ",B)

#함수 2번
def get_max(A,B):
    if A>B:
        return A
    else:
        return B
    
A1=int(input("첫 번쨰 정수를 입력하시오: "))
B2=int(input("두 번째 정수를 입력하시오: "))
C=get_max(A1,B2)
print("큰 수는",C)

#함수 3번
def distance(X,Y):
    god=(X**2+Y**2)**0.5
    return god
A=int(input("x 좌표 입력: "))
B=int(input("y 좌표 입력: "))
dis=distance(A,B)
print("거리: ",dis)

#함수 4번
def mul(n,max_num):
    if(n<max_num):
        for i in range(n, max_num):
            if (i%6==0):
              print(i)
    else:
        print("잘못된 입력입니다.")

A=int(input("배수 입력: "))
B=int(input("최댓값 입력: "))
chu=mul(A,B)

#함수 5번
def print_menu():
    print("1. 치즈버거 세트")
    print("2. 불고기버거 세트")
    print("3. 치킨버거 새트")
    print("4. 종료")

def check_menu(n):
    if(n<5):
        print(n,"번 메뉴가 선택되었습니다.")
    else:
        print("잘못된 메뉴를 선택하셨습니다.")

print_menu()
A=int(input("메뉴 선택: "))
check_menu(A)