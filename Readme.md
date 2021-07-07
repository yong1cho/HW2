# HW2: fork, exec 실습

cat 명령어 실행 파일을 직접 작성하고, 실행파일을 fork 및 exec를 이용해 실행해보자.

## 파일 구성
> __mycat.c:__ __'cat'__ __명령어와__ __같은__ __작업을__ 수행하는 코드 필요
> 
> __myexecute.c:__ mycat.c를 이용해 만든 실행파일을 실행시키는 코드 필요
>
> __mycat__ , __myexecute__ : 각각 mycat.c, myexecute.c를 완성한 예시 실행 파일


## 구현 방법
0. 실제 cat 명령어는 __cat__ __<파일명>__ 으로 구성된다.
1. __mycat.c__ 를 완성해서 __mycat__ __<파일명>__ 으로 실제 cat 명령어와 같은 동작을 하도록 만든다.
2. __myexecute.c__ 를 완성해서 __myexecute__ __<파일명>__ 을 통해 mycat 실행파일이 실행되고, __<파일명>__ 이 전달될 수 있도록 만든다.

## 구현 결과

#### 실제 'cat'명령어 사용할 경우

> ![cat_only](https://user-images.githubusercontent.com/44739822/124771793-647d4b80-df76-11eb-8bda-4e6d850f23b1.PNG)

#### mycat.c를 구현해 사용할 경우

> ![cat](https://user-images.githubusercontent.com/44739822/124771841-70690d80-df76-11eb-925f-d589887052d5.PNG)

#### myexecute.c까지 구현해 사용할 경우

> ![execute](https://user-images.githubusercontent.com/44739822/124773532-00f41d80-df78-11eb-85d9-c47e2a919bcf.PNG)
