extends ECS_EntityManager


# Declare member variables here. Examples:
# var a = 2
# var b = "text"


# Called when the node enters the scene tree for the first time.
func _ready():
	var x = -100
	for _n in range(100): #run 100x100 times to spawn a lot
		x += 25
		var y = -100
		for _r in range(100):
			y += 25
			var id = addEntity() #id is the entity ID, this will be sequential and not change with deleted entities
			addSineMoverComponent(id) #add this to let it move with the sine wave math func
			addSpriteComponent(id) #add this to give the program something to render
			addTransformComponent(id) #add this to give the entity a position in space (2D)
			
			if rand_range(0.0,1.0) > 0.9: #just to allow some variation in the sprites
				setEntitySprite(id, load("res://gyarados.png"))
			else:
				setEntitySprite(id,load("res://magikarp.png"))
			
			setEntitySineMoveIntensity(id, Vector2(rand_range(-5.0,5.0),rand_range(-5.0,5.0))) #set the intensity the sine affects
			setEntitySineMoveSpeed(id, rand_range(-0.01,0.01))
			#setEntitySineMoveSeed(id, 1)
			x += rand_range(-5,5) #add some offset to the position
			y += rand_range(-5,5) #add some offset to the position
			
			setEntitySineMoveSeed(id, rand_range(-2.0,2.0) ) #this makes sure they are not all moving in sync
			setEntityPosition(id, Vector2(x ,y)) #set the position with x and y

	pass # Replace with function body.
# Called every frame. 'delta' is the elapsed time since the previous frame.
#func _process(delta):
#	pass
