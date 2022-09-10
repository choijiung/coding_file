import pygame

pygame.init() #초기화(반드시)

screen_width = 480 #화면 가로
screem_height = 640 #세로
screen = pygame.display.set_mode((screen_width, screem_height))

pygame.display.set_caption("Game") #게임 이름

#이벤트 루프    
running = True #게임 진행중?
while running:
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            running = False
pygame.quit()