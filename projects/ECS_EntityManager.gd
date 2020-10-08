extends ECS_EntityManager


# Declare member variables here. Examples:
# var a = 2
# var b = "text"


# Called when the node enters the scene tree for the first time.
func _ready():
	var x = -100
	for n in range(100):
		x += 50
		var y = -100
		for r in range(100):
			y += 50
			var id = addEntity()
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
