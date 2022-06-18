console.log('hello world');
for(let x=0; x<50000;x++){
    console.log(x);
    if(x==30000){
        process.exit();
    }
}