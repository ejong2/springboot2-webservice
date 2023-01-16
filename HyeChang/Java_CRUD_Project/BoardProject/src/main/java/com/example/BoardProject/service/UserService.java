package com.example.BoardProject.service;

import com.example.BoardProject.dto.UserDTO;
import com.example.BoardProject.repository.UserRepository;
import org.apache.catalina.User;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Service;

import java.util.List;

@Service
public class UserService {
    @Autowired
    UserRepository userRepository;

    public UserDTO insertUser(UserDTO user){
        return userRepository.insertUser(user);
    }

    public List<UserDTO> getAllUsers(){
        return userRepository.getAllUsers();
    }

    public UserDTO getUserByUserId(String userId){
        return userRepository.getUserByUserId(userId);
    }

    public void UpdateUserPw(String userId, UserDTO user){
        userRepository.updateUserPw(userId, user);
    }

    public void deleteUser(String userId){
        userRepository.deleteUser(userId);
    }
}
