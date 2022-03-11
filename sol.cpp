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
  }
    for(int i=0;i<n;i++){
  	cin>>iemo[i];
  }
  for(int i=0;i<n;i++){
    if(iemo[i]==emo_list[0]){
  	total_score=total_score+(digit[i]*emo_point[0]);
    }
    else if(iemo[i]==emo_list[1]){
  	total_score=total_score+(digit[i]*emo_point[1]);
    }
    else if(iemo[i]==emo_list[2]){
  	total_score=total_score+(digit[i]*emo_point[2]);
    }
    else if(iemo[i]==emo_list[3]){
  	total_score=total_score+(digit[i]*emo_point[3]);
    }
   }
  //vowel count
    int v_count = 0;
    int total_v_count=0;
  
  for(int j=0;j<n;j++){
    int x =s[j].length();
    for(int i = 0; i<x; i++)  
    {
        if(s[j][i]=='a'|| s[j][i]=='e'||s[j][i]=='i'||s[j][i]=='o'||s[j][i]=='u'
        ||s[j][i]=='A'||s[j][i]=='E'||s[j][i]=='I'||s[j][i]=='O' ||s[j][i]=='U')
        {
		    v_count++;
        }
      
    }
    total_v_count=total_v_count+(v_count*digit[j]);
    v_count=0;
  }
 int num=total_score/total_v_count;
  
  //check prime
  if (num<= 1)
        cout<<"No";

    for (int i = 2; i <= sqrt(num); i++)
        if (num % i == 0){
            cout<<"No";
            break;
        }
    else
    cout<<"Yes";
  //cout num
  //cout<<" "<<"Four";
  if(num==1)
  cout<<" "<<"One";
  else if(num==2)
  cout<<" "<<"Two";
  else if(num==3)
  cout<<" "<<"Three";
  else if(num==2)
  cout<<" "<<"Four";
  else
    cout<<"";
 /* if(x==1)
  cout<<"No Four";
  else
      cout<<"Yes Two";
*/
}
