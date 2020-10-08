extends ECS_EntityManager


# Declare member variables here. Examples:
# var a = 2
# var b = "text"


# Called when the node enters the scene tree for the first time.
func _ready():
	var x = -100
	for _n in range(100):
		x += 25
		var y = -100
		for _r in range(100):
			y += 25
			var id = addEntity()
			if rand_range(0.0,1.0) > 0.9:
				setEntitySprite(id, load("res://gyarados.png"))
			else:
				setEntitySprite(id,load("res://magikarp.png"))
			
			setEntitySineMoveIntensity(id, Vector2(rand_range(-5.0,5.0),rand_range(-5.0,5.0)))
			setEntitySineMoveSpeed(id, rand_range(-0.01,0.01))
			#setEntitySineMoveSeed(id, 1)
			x += rand_range(-5,5)
			y += rand_range(-5,5)
			
			#setEntitySineMoveSeed(id, rand_range(-2.0,2.0) )
			setEntityPosition(id, Vector2(x ,y))

	pass # Replace with function body.

func _process(delta):
	
	pass
# Called every frame. 'delta' is the elapsed time since the previous frame.
#func _process(delta):
#	pass
