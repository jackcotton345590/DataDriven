#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	TwitterSet.load("tweet.png");
	btn1.set(20, 160, 160, 80);
	btn2.set(20, 250, 160, 80);
	btn3.set(20, 340, 160, 80);
	btn4.set(20, 430, 160, 80);
	btn5.set(20, 520, 160, 80);
	btn6.set(20, 610, 160, 80);
	btn7.set(20, 700, 160, 80);
	btn8.set(20, 790, 160, 80);
	btn9.set(20, 880, 160, 80);
	btn10.set(20, 970, 160, 80);
	tweetbtn.set(0, 0, 100, 100);
	

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
	
	ofDrawBitmapString("Welcome to my data driven app",740, 60); //Writes text
	ofSetColor(192, 222, 237);
	ofDrawRectangle(0, 0, 1920, 1080);
	ofSetColor(29, 202, 255);
	ofDrawRectangle(0, 0, 200, 1080);
	ofSetColor(0, 132,180);
	ofDrawRectangle(0, 0, 1920, 150);
	ofSetColor(0);
	ofDrawBitmapString("Total Tweets", 30, 180);
	ofSetColor(255);
	ofDrawRectangle(btn1);
	ofDrawRectangle(btn2); //draws rectangle in set positions
	ofDrawRectangle(btn3);
	ofDrawRectangle(btn4);
	ofDrawRectangle(btn5);
	ofDrawRectangle(btn6);
	ofDrawRectangle(btn7);
	ofDrawRectangle(btn8);
	ofDrawRectangle(btn9);
	ofDrawRectangle(btn10);
	ofSetColor(0);
	ofDrawBitmapString("Recent searches: ", 38, 200);
	ofDrawBitmapString("Total tweets ", 45, 290);
	ofDrawBitmapString("Money", 38, 380);
	ofDrawBitmapString("Politics", 38, 470);
	ofDrawBitmapString("Paris", 38, 560);
	ofDrawBitmapString("Dreamworks", 38, 650);
	ofDrawBitmapString("Uber", 38, 740);
	ofDrawBitmapString("Fitness", 38, 830);
	ofDrawBitmapString("Wrestling", 38, 920);
	ofDrawBitmapString("Pizza", 38, 1010);
	ofSetColor(255);
	ofDrawRectangle(700, 50,500,80 );
	ofSetColor(255);
	ofDrawRectangle(550, 250, 1000, 500);
	ofSetColor(0);
	ofDrawBitmapString("Welcome to my data driven app", 820, 100);
	ofDrawBitmapString("Search Results: ",600 , 300);
	
	TwitterSet.draw(tweetbtn);
	
	
	

}

