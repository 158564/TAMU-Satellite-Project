//Made a demo header for y'all to start with. We need a background for our game, and Jumpei and I picked this one out. 
//In the struct or class we'll be building to connect the working parts, we can call this void() funtion to attach
//the background onto the screen. Widgets and satallites will go over it, so we'll have to call this first to ensure
//it doesn't cover anything.

void map()
{
    Image World_Map(Point{0,0}, "miller_world_political_wall_mural_lg.jpg");
    attach(World_Map);
}
