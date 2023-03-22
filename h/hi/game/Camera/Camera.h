#ifndef Camera_hpp
#define Camera_hpp

#include "Point.h"
#include "Vector2D.h"
#include "SDL2/SDL.h"
#include "GameLoop.h"


class Camera{
public:
    
    void Update(float dt);
    
    inline SDL_Rect GetViewBow(){
        return m_ViewBox;
    }
    
    inline Vector2D GetPosition(){
        return m_Position;
    }
    
    inline void SetTarget(Point* target){
        m_Target = target;
    }
    
    inline static Camera* GetInstance (){
        return (s_Instance !=nullptr) ? s_Instance : new Camera();}
    
    
private:
    Camera(){m_ViewBox = {0,0,960,640};}
    
    Point* m_Target;
    Vector2D m_Position;
    
    SDL_Rect m_ViewBox;
    static Camera* s_Instance;
};

#endif /* Camera_hpp */
