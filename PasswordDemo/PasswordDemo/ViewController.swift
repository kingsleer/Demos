//
//  ViewController.swift
//  PasswordDemo
//
//  Created by pfl on 15/6/12.
//  Copyright (c) 2015年 pfl. All rights reserved.
//

import UIKit

class ViewController: UIViewController, verifyPwdProtocol{

    override func viewDidLoad() {
        super.viewDidLoad()
        
        let  passwordView = PasswordView(frame: UIScreen.mainScreen().bounds)
        passwordView.backgroundColor = UIColor.whiteColor()
        view.backgroundColor = UIColor.whiteColor()
        view.addSubview(passwordView)
        
    }

    func callbackpwd(btnArr: NSArray) {
        
        
        
    }

}
