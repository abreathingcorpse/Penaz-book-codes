import pygame


class Game:
    framerate = 60
    running = True

    def __init__(self):
        pygame.display.init()
        self.screen = pygame.display.set_mode((800, 600), pygame.NOFRAME, 32)
        self.clock = pygame.time.Clock()
        self.circlepos = [0, 300]
        self.circlespeed = 1
        self.frametime = 1./self.framerate
        self.dt = 1./self.framerate

    def update(self, dt):
        if self.circlepos[0] <= 0:
            self.circlespeed = 1
        if self.circlepos[0] >= 800:
            self.circlespeed = -1
        self.circlepos[0] += self.circlespeed * dt

    def draw(self):
        self.screen.fill((0, 0, 0))
        pygame.draw.circle(self.screen, (255, 255, 255), self.circlepos, 20)
        pygame.display.flip()

    def run(self):
        while self.running:
            while (self.frametime > 0):
                dt = min(self.dt, self.frametime)
                self.update(dt)
                self.frametime -= dt
            self.draw()
            self.frametime = self.clock.tick()


if __name__ == '__main__':
    game = Game()
    game.run()
