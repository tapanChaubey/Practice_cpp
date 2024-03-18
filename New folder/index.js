const express=require("express");
const fs=require("fs");
const app=express();
const port=3000;
app.use(express.static("."));
app.use(express.urlencoded());
app.post("/product",(req,res)=>{
    fs.readFile("user.json","utf-8",(err,data)=>{
        let record=JSON.parse(data);
        let f=0;
        let result=record.forEach((item)=>{
            if(item.username==req.body.username &&item.email==req.body.email && item.password==req.body.password){
                f=1;
            }
        })
        if(f==0){
            record.push(req.body);
            fs.writeFile("user.json",JSON.stringify(record),(err)=>{
                if(err)
                console.log(err);
            else{
                 res.send("success");
              
            }
            }) 
        }
        else{
            res.send("Welcome to  username/password");
        }
    })
    
})
app.listen(port,(err)=>{
   console.log("sever strated !");
})










