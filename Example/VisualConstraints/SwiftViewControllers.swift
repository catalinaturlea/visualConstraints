//
//  SwiftViewControllers.swift
//  VisualConstraints
//
//  Created by Catalina Turlea on 5/2/15.
//  Copyright (c) 2015 Catalina Turlea. All rights reserved.
//

import UIKit

class SwiftExampleViewController: UIViewController {
    
    override func viewDidLoad() {
        
        let contentView = UIView()
        self.view.addSubview(contentView)
        
        // Add the constraints
        contentView.addConstraints(forWidth: 300)
        contentView.addConstraints(forWidth: 200)
        contentView.addConstraintsToCenter()
        contentView.backgroundColor = UIColor.red
        contentView.translatesAutoresizingMaskIntoConstraints = false
        
        // Adding a label to the contentView
        let label = UILabel()
        contentView.addSubview(label)
        label.backgroundColor = UIColor.white
        
        label.addConstraintsToAlignLeft(withOffset: 10)
        label.addConstraintsToAlignTop(withOffset: 20)
        label.text = "Left aligned label"
        
        // Adding a label to the contentView
        let label2 = UILabel()
        contentView.addSubview(label2)
        label2.backgroundColor = UIColor.white
        
        label2.addConstraintsToFillHorizontal(withLeftPadding: 10, rightPadding:10)
        label2.text = "Full width label"
        label.addConstraints(forVerticalOffset: 20, to:label2)
        
        let image = UIImageView()
        image.isHighlighted = true;
    }
}
