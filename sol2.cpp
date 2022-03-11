#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main(){
int n;
  cin>>n;
  int digit[n];
  string s[n];
  string iemo[n];
  string emo_list[4]={"Happy","Sad","Neutral","None"};
  int emo_point[4]={10,5,2,1};
  int total_score=0;
  for(int i=0;i<n;i++){
  	cin>>digit[i];
    cin>>s[i];
    
    // cout<<digit[i]<<s[i];
  }
    for(int i=0;i<n;i++){
  	cin>>iemo[i];
  }
  for(int i=0;i<n;i++){
    if(iemo[i]==emo_list[0]){
  	total_score=(total_score+(digit[i]  * emo_point[0]));
//   	cout<<digit[i]<<" "<<emo_point[0]<<" "<<total_score<<" ";
    }
    else if(iemo[i]==emo_list[1]){
  	total_score=total_score+(digit[i] * emo_point[1]);
//   	cout<<digit[i]<<" "<<emo_point[0]<<" "<<total_score<<" ";

    }
    else if(iemo[i]==emo_list[2]){
  	total_score=total_score+(digit[i] * emo_point[2]);
//   	cout<<digit[i]<<" "<<emo_point[0]<<" "<<total_score<<" ";

    }
    else if(iemo[i]==emo_list[3]){
  	total_score=total_score+(digit[i]*emo_point[3]);
//   	cout<<digit[i]<<" "<<emo_point[0]<<" "<<total_score<<" ";

    }
    // else
    // // cout<<"np"<<" ";
   }
  //vowel count
    int v_count = 0;
    int total_v_count=0;
  for(int j=0;j<n;j++){
    int x=s[j].length();
    for(int i = 0; i<x; i++)  
    {
        if(s[j][i]=='a'|| s[j][i]=='e'||s[j][i]=='i'||s[j][i]=='o'||s[j][i]=='u'
        ||s[j][i]=='A'||s[j][i]=='E'||s[j][i]=='I'||s[j][i]=='O' ||s[j][i]=='U')
        {
		    v_count++;
        }
      
    }
    total_v_count=total_v_count+(v_count*digit[j]);
    // cout<<"count"<<total_v_count<<" "<<v_count<<" "<<digit[j]<<" ";
    v_count=0;
  }
 int num=total_score/total_v_count;
  
  //check prime

   bool flag = true;

   for(int i = 2; i <= num / 2; i++) {
      if(num % i == 0) {
         flag = false;
         break;
      }
   }
   if (flag==true)
      cout<<"Yes";
   else
      cout<<"No";

  //print num
  int sum=0;
int r;
  while(num>0)    
{    
r=num%21;    
sum=sum*21+r;
num=num/21;    
}    
num=sum;
while(num>0)    
{    
r=num%21;    
switch(r)    
{    
case 1:    
cout<<" One";    
break;    
case 2:    
cout<<" Two";    
break;    
case 3:    
cout<<" Three";  
break;    
case 4:    
cout<<" Four";  
break;    
case 5:    
cout<<" Five";  
break;    
case 6:    
cout<<" Six";  
break;    
case 7:  
cout<<" Seven";  
break;  
case 8:    
cout<<" Eight";    
break;    
case 9:    
cout<<" Nine";  
break;    
case 10:
cout<<" Ten";
break;
case 11:    
cout<<" Eleven";    
break;    
case 12:    
cout<<" Twelve";    
break;    
case 13:    
cout<<" Thirteen";  
break;    
case 14:    
cout<<" Fourteen";  
break;    
case 15:    
cout<<" Fifteen";  
break;    
case 16:    
cout<<" Sixteen";  
break;    
case 17:  
cout<<" Seventeen";  
break;  
case 18:    
cout<<" Eighteen";    
break;    
case 19:    
cout<<" Nineteen";  
break;    
case 20:
cout<<" Twenty";
break;
default:    
cout<<"  ";    
break;    
}
    return 0;
}
}
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
string one[] = { "", "One","Two","Three","Four",
         "Five ","Six","Seven","Eight",
                "Nine","Ten","Eleven","Twelve",
                "Thirteen","Fourteen","Fifteen",
            "Sixteen", "Seventeen","Eighteen",
                "Nineteen" };
 
string ten[] = { "", "", "Twenty ", "Thirty ", "Forty ",
                 "Fifty ", "Sixty ", "Seventy ", "Eighty ",
                 "Ninety " };
 
string number(int n, string s)
{
    string str = "";
    if (n > 19)
        str += ten[n / 10] + one[n % 10];
    else
        str += one[n];
 
    if (n)
        str += s;
 
    return str;
}
 
string in_words(long n)
{
    string ans;
 
    ans += number((n / 10000000), "Crore ");
 
    ans += number(((n / 100000) % 100), "Lakh ");
 
    ans += number(((n / 1000) % 100), "Thousand ");
 
    ans += number(((n / 100) % 10), "Hundred ");
 
    if (n > 100 && n % 100)
        ans += "And ";
 
    ans += number((n % 100), "");
   
    if(ans=="")
    ans = "Zero";
 
    return ans;
}
int main(){
int n;
  cin>>n;
  int digit[n];
  string s[n];
  string iemo[n];
  string emo_list[4]={"Happy","Sad","Neutral","None"};
  int emo_point[4]={10,5,2,1};
  int total_score=0;
  for(int i=0;i<n;i++){
  	cin>>digit[i];
    cin>>s[i];
    
    // cout<<digit[i]<<s[i];
  }
    for(int i=0;i<n;i++){
  	cin>>iemo[i];
  }
  for(int i=0;i<n;i++){
    if(iemo[i]==emo_list[0]){
  	total_score=(total_score+(digit[i]  * emo_point[0]));
//   	cout<<digit[i]<<" "<<emo_point[0]<<" "<<total_score<<" ";
    }
    else if(iemo[i]==emo_list[1]){
  	total_score=total_score+(digit[i] * emo_point[1]);
//   	cout<<digit[i]<<" "<<emo_point[0]<<" "<<total_score<<" ";

    }
    else if(iemo[i]==emo_list[2]){
  	total_score=total_score+(digit[i] * emo_point[2]);
//   	cout<<digit[i]<<" "<<emo_point[0]<<" "<<total_score<<" ";

    }
    else if(iemo[i]==emo_list[3]){
  	total_score=total_score+(digit[i]*emo_point[3]);
//   	cout<<digit[i]<<" "<<emo_point[0]<<" "<<total_score<<" ";

    }
    // else
    // // cout<<"np"<<" ";
   }
  //vowel count
    int v_count = 0;
    int total_v_count=0;
  for(int j=0;j<n;j++){
    int x=s[j].length();
    for(int i = 0; i<x; i++)  
    {
        if(s[j][i]=='a'|| s[j][i]=='e'||s[j][i]=='i'||s[j][i]=='o'||s[j][i]=='u'
        ||s[j][i]=='A'||s[j][i]=='E'||s[j][i]=='I'||s[j][i]=='O' ||s[j][i]=='U')
        {
		    v_count++;
        }
      
    }
    total_v_count=total_v_count+(v_count*digit[j]);
    // cout<<"count"<<total_v_count<<" "<<v_count<<" "<<digit[j]<<" ";
    v_count=0;
  }
 int num=total_score/total_v_count;
  
  //check prime

   bool flag = true;

   for(int i = 2; i <= num / 2; i++) {
      if(num % i == 0) {
         flag = false;
         break;
      }
   }
   if (flag==true)
      cout<<"Yes";
   else
      cout<<"No";

  //print num
cout<<" "<< in_words(num); 
}

//new one





