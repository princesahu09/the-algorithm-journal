for(int i=0;i<word.length();i++){
    if(word[i]>=65 && word[i]<=90){
        if(word[i]==word[i+1]) continue;
            for(int j=i+1;j<word.length();j++){
                if(word[j]==word[i]+32){
                    count++;
                    break;
                }
            }
    }
    else if(word[i]>=97 && word[i]<=122)
    break;

}  

 return count;

}