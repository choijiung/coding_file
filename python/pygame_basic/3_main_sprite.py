import pygame

pygame.init() #초기화(반드시)

screen_width = 480 #화면 가로
screen_height = 640 #세로
screen = pygame.display.set_mode((screen_width, screen_height))

pygame.display.set_caption("Game") #게임 이름

#배경 불러오기 
background = pygame.image.load("/Users/Jiung/coding/coding_learn/python/pygame_basic/assets/background.png")

#캐릭터 불러오기
character = pygame.image.load("/Users/Jiung/coding/coding_learn/python/pygame_basic/assets/character.png")
character_size = character.get_rect().size #크기
character_width = character_size[0] #가로
character_height = character_size[1] #세로
character_x_pos = (screen_width / 2) - (character_width / 2) #가로 화면 절반
character_y_pos = screen_height - character_height#화면 세로 가장 아래


#이벤트 루프    
running = True #게임 진행중?
while running:
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            running = False
  
    screen.blit(background, (0, 0)) #배경 그리기 
    screen.blit(character, (character_x_pos, character_y_pos))

    pygame.display.update() # 게임 화면 다시 그리기
pygame.quit()