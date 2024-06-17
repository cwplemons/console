import sys, pygame
pygame.init()
window = pygame.display.set_mode((1920, 1080))
font = (
  pygame.font.Font('default', 16),
  pygame.font.Font('default', 16),
  pygame.font.Font('default', 16),
  pygame.font.Font('default', 16),
  pygame.font.Font('default', 16),
  pygame.font.Font('default', 16),
  pygame.font.Font('default', 16),
  pygame.font.Font('default', 16)
)
color = (
  (255, 0, 255),      #TRANSPARENT
  (32, 32, 64),       #BLACK
  (192, 192, 224),    #WHITE
  (224, 32, 64),      #RED
  (64, 224, 32),      #GREEN
  (32, 64, 224)       #BLUE
)

RED = (
  (224, 32, 64), (196, 28, 56), (168, 24, 48), (140, 20, 40),
  (112, 16, 32), (84, 12, 24), (56, 8, 16), (28, 4, 8)
)
