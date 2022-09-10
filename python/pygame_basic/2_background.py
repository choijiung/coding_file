import pygame

pygame.init() #초기화(반드시)

screen_width = 480 #화면 가로
screen_height = 640 #세로
screen = pygame.display.set_mode((screen_width, screen_height))

pygame.display.set_caption("Game") #게임 이름

#배경 불러오기 
background = pygame.image.load("/Users/Jiung/coding/coding_learn/python/pygame_basic/assets/background.png")

#이벤트 루프    
running = True #게임 진행중?
while running:
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            running = False

    # screen.fill((0, 0, 255))     
    screen.blit(background, (0, 0)) #배경 그리기 
    
    pygame.display.update() # 게임 화면 다시 그리기
pygame.quit()