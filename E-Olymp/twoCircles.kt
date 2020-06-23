import java.util.*
import kotlin.math.*

fun calc_dist(x1: Double, y1: Double, x2: Double, y2: Double): Double {
        var dist: Double = sqrt((x1 - x2).pow(2) + (y1 - y2).pow(2))
        return dist 
}

fun main(args: Array<String>) {
        val sc = Scanner(System.`in`)
        //circle 1
        var x1 = sc.nextDouble()
        var y1 = sc.nextDouble()
        var r1 = sc.nextDouble()
        //circle 2
        var x2 = sc.nextDouble()
        var y2 = sc.nextDouble()
        var r2 = sc.nextDouble()

        if (x1 == x2 && y1 == y2) {
                if (r1 == r2) {
                        println(-1)
                } else println(0)
        } else {
                var centre_dist: Double = calc_dist(x1, y1, x2, y2)
                if (centre_dist == r1 + r2)
                        println(1)
                else if (centre_dist > r1 +  r2)
                        println(0)
                else println(2)
        }
}
