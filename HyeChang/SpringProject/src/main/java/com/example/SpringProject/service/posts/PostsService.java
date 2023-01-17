package com.example.SpringProject.service.posts;

import com.example.SpringProject.domain.posts.Posts;
import com.example.SpringProject.domain.posts.PostsRepository;
import com.example.SpringProject.web.dto.PostsResponseDto;
import com.example.SpringProject.web.dto.PostsSaveRequestDto;
import com.example.SpringProject.web.dto.PostsUpdateRequestDto;
import jakarta.transaction.Transactional;
import lombok.RequiredArgsConstructor;
import org.springframework.stereotype.Service;

@RequiredArgsConstructor
@Service
public class PostsService  {
    private final PostsRepository postsRepository;

    @Transactional
    public Long save(PostsSaveRequestDto requestDto){
        return postsRepository.save(requestDto.toEntity()).getId();
    }

    @Transactional
    public Long update(Long id, PostsUpdateRequestDto requestDto){
        Posts posts = postsRepository.findById(id)
                .orElseThrow(() ->new
                        IllegalArgumentException("해당 게시글이 없습니다. id ="+ id));
        posts.update(requestDto.getTitle(), requestDto.getContent());

        return id;
    }
    public PostsResponseDto findById (long id){
        Posts entity = postsRepository.findById(id)
                .orElseThrow(() -> new
                        IllegalArgumentException("해당 게시글이 없습니다. id=" + id));
        return new PostsResponseDto(entity);
    }
}
