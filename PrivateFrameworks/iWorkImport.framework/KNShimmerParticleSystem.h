/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class KNShimmerObjectSystem, TSDGLDataBufferAttribute;

@interface KNShimmerParticleSystem : KNShimmerSystem {
    TSDGLDataBufferAttribute *mObjectDataBufferAttributeColor;
    TSDGLDataBufferAttribute *mObjectDataBufferAttributePosition;
    TSDGLDataBufferAttribute *mObjectDataBufferAttributeSpeed;
    KNShimmerObjectSystem *mObjectSystem;
}

@property TSDGLDataBufferAttribute * objectDataBufferAttributeColor;
@property TSDGLDataBufferAttribute * objectDataBufferAttributePosition;
@property TSDGLDataBufferAttribute * objectDataBufferAttributeSpeed;
@property KNShimmerObjectSystem * objectSystem;
@property unsigned long long particleCount;
@property unsigned long long visibleParticleCount;

+ (id)newDataBufferAttributeWithName:(id)arg1;
+ (bool)willOverrideColors;
+ (bool)willOverrideStartingPoints;

- (struct { float x1; float x2; float x3; float x4; })colorAtIndexPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)drawGLSLWithPercent:(double)arg1 opacity:(double)arg2 rotation:(double)arg3 clockwise:(bool)arg4;
- (struct { float x1; float x2; })lifeSpanAtIndexPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)objectDataBufferAttributeColor;
- (id)objectDataBufferAttributePosition;
- (id)objectDataBufferAttributeSpeed;
- (id)objectSystem;
- (struct { float x1; float x2; })p_hullPoint:(struct { float x1; float x2; })arg1 inVertexRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)p_setupVertexData;
- (double)scaleAtIndexPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setObjectDataBufferAttributeColor:(id)arg1;
- (void)setObjectDataBufferAttributePosition:(id)arg1;
- (void)setObjectDataBufferAttributeSpeed:(id)arg1;
- (void)setObjectSystem:(id)arg1;
- (struct { float x1; float x2; float x3; })speedAtIndexPoint:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })startingPointAtIndexPoint:(struct CGPoint { double x1; double x2; })arg1;

@end
