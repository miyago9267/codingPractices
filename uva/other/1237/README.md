# [1237 - Expert Enough?](https://vjudge.net/contest/470301#problem/C)

給你 n 筆資料  
每筆告訴你工廠名、出產過車子最低和最高價格  
共有 q 組詢問，每組給你一個整數 p  
輸出出產車子價格區間包含 p 的工廠名  
如果有多間同時符合或沒有半間符合，輸出 UNDETERMINED

## Solve:
- Sol:
使用線性搜尋就好(絕對不是我不會線段數)  
一個一個搜尋上下界  
找到了記錄起來

## Note:
- 注意 同時有多間符合不可以算進去
- 每筆測資結束記得換行 我被這個坑了3次 好險有udebug讓我知道為什麼錯