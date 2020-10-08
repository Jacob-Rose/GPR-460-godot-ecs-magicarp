/* system.h */

#ifndef ECS_SYSTEM_H
#define ECS_SYSTEM_H

#include <core/engine.h>
#include <scene/main/node.h>
#include <scene/2d/node_2d.h>
#include <vector>

#include "component.h"

class ECS_System : public Node2D {
	GDCLASS(ECS_System, Node2D);
	protected:
		static void _bind_methods();

		//notification is the only auto-linked function in a GDCLASS
		void _notification(int p_what);
	public:
		ECS_System();

		virtual void _process(float delta);
		virtual void _draw();
};


class ECS_RenderSystem : public ECS_System {
	GDCLASS(ECS_RenderSystem, ECS_System);

public:
	ECS_RenderSystem();

	void _process(float delta) override;
	void _draw() override;
};


class ECS_SineMoveSystem : public ECS_System {
	GDCLASS(ECS_SineMoveSystem, ECS_System);

public:
	ECS_SineMoveSystem();

	void _process(float delta) override;
};


#endif // ECS_SYSTEM_H
