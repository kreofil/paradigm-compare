//------------------------------------------------------------------------------
// perimeterRect.go - содержит функцию вычисления периметра прямоугольника

package rectangle

// Вычисление периметра прямоугольника
func (r *Rectangle)Perimeter() float64 {
    return float64((r.x + r.y) * 2)
}
