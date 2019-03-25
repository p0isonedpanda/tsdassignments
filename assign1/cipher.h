/*
 * TSD Assignment 1
 * Author: Daniel Coady
 * Student Number: 102084174
 *
 * File: cipher.h
 * Header file to declare all functions in cipher.cpp
 */

#pragma once

// used to encode unencrypted numbers
std::string TwoThreeDig(std::string input);
std::string FourDig(std::string input);
std::string EightDig(std::string input);

// used to decode encrypted numbers
std::string DecFourDig(std::string input);
std::string DecEightDig(std::string input);
