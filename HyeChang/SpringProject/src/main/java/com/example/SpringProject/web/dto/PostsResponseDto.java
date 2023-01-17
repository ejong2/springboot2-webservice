package com.example.SpringProject.web.dto;

import com.example.SpringProject.domain.posts.Posts;
import lombok.Getter;

import java.security.PublicKey;

@Getter
public class PostsResponseDto {
    private Long id;
    private String title;
    private String content;
    private String author;

    public PostsResponseDto(Posts entity){
        this.id = entity.getId();
        this.title = entity.getTitle();
        this.content = entity.getContent();
        this.author = entity.getAuthor();
    }
}
