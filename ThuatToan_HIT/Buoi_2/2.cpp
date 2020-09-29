// upcoder #Rokkufind01

/*
    Buổi tà tữa hôm đó, trong lúc Rokku đang trò chuyện với Eureka rất zui zẻ, thì ngẫu nhiên một chiếc xe ba gác chở thuê chạy qua, Rokuu vô tình nhìn thấy số điện thoại trên đó, lúc sau đưa ra thách thức :" Hmm, Eureka !! nếu cậu trả lời đúng câu hỏi của tớ, tớ sẽ trả chầu này". (vừa thể hiện được chút ga lăng, vừa có thể test được IQ của cô bạn gái :)) <3 )
Câu đố nội dung như sau : Cho một số nguyên dương N<10^18, đếm xem từ 1 đến N tồn tại bao nhiêu  số chính phương :)).
*/

#include <bits/stdc++.h>
using namespace std;
//  c1
//  int main()
//  {
//      long long n, sum=0;
//      cin>>n;
//      for ( int i = 1; i <= sqrt(n); i++)
//      {
//          if ( i*i <= n)
//             sum ++;
//      }
//      cout<<sum;
//  }

//  c2

 int main()
 {
     long long n, sum=0;
     cin>>n;
     cout<<(int)sqrt(n);
 }