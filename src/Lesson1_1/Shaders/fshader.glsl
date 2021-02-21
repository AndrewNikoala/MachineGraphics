#ifdef GL_ES
// Set default precision to medium
precision mediump int;
precision mediump float;
#endif

varying lowp vec4 col;

//! [0]
void main()
{
    gl_FragColor = col;
}
//! [0]

