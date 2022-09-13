import pygame
from random import randint
##############################################################
# 기본 초기화 (반드시 해야 하는 것들)
pygame.init()

# 화면 크기 설정
screen_width = 480 # 가로 크기
screen_height = 640 # 세로 크기
screen = pygame.display.set_mode((screen_width, screen_height))

# 화면 타이틀 설정
pygame.display.set_caption("똥피하기")

background = pygame.image.load("/Users/Jiung/coding/coding_learn/python/pygame_basic/assets/background.png")


clock = pygame.time.Clock()

character = pygame.image.load("/Users/Jiung/coding/coding_learn/python/pygame_basic/assets/character.png")
character_size = character.get_rect().size
character_width = character_size[0]
character_height = character_size[1]
character_x_pos = (screen_width / 2) - (character_width / 2)
character_y_pos = screen_height - character_height

DDong = pygame.image.load("/Users/Jiung/coding/coding_learn/python/pygame_basic/assets/enemy.png")
DDong_size = DDong.get_rect().size
DDong_width = DDong_size[0]
DDong_height = DDong_size[1]
DDong_x_pos = randint(0, (screen_width - DDong_width))
DDong_y_pos = 0 - DDong_height

DDong_speed= 0.6
to_x = 0
speed = 0.6

running = True
while running:
    dt = clock.tick(60)
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            running = False 
        if event.type == pygame.KEYDOWN:
            if event.key == pygame.K_LEFT:
                to_x -= speed
            elif event.key == pygame.K_RIGHT:
                to_x += speed
        if event.type == pygame.KEYUP:
            if event.key == pygame.K_LEFT or event.key == pygame.K_RIGHT:
                to_x = 0
    character_x_pos += to_x * dt
    if character_x_pos < 0:
        character_x_pos = 0
    elif character_x_pos > screen_width - character_width:
        character_x_pos = screen_width - character_width
    DDong_y_pos += DDong_speed * dt

    character_rect = character.get_rect()
    character_rect.left = character_x_pos
    character_rect.top = character_y_pos

    DDong_rect = DDong.get_rect()
    DDong_rect.left = DDong_x_pos
    DDong_rect.top = DDong_y_pos

    if character_rect.colliderect(DDong_rect):
        print("출동했어요")
        running = False

    if DDong_y_pos > screen_height - DDong_height:
        DDong_y_pos = 0 - DDong_height
        DDong_x_pos = randint(0, screen_width - DDong_width)

    screen.blit(background, (0, 0))
    screen.blit(character, (character_x_pos, character_y_pos))
    screen.blit(DDong, (DDong_x_pos, DDong_y_pos))
    
    pygame.display.update()

pygame.quit()