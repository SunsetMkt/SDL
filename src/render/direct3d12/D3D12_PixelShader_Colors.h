#if 0
;
; Input signature:
;
; Name                 Index   Mask Register SysValue  Format   Used
; -------------------- ----- ------ -------- -------- ------- ------
; SV_Position              0   xyzw        0      POS   float       
; TEXCOORD                 0   xy          1     NONE   float       
; COLOR                    0   xyzw        2     NONE   float   xyzw
;
;
; Output signature:
;
; Name                 Index   Mask Register SysValue  Format   Used
; -------------------- ----- ------ -------- -------- ------- ------
; SV_Target                0   xyzw        0   TARGET   float   xyzw
;
; shader hash: e14ad578e44fd6120d8623f70e822140
;
; Pipeline Runtime Information: 
;
; Pixel Shader
; DepthOutput=0
; SampleFrequency=0
;
;
; Input signature:
;
; Name                 Index             InterpMode DynIdx
; -------------------- ----- ---------------------- ------
; SV_Position              0          noperspective       
; TEXCOORD                 0                 linear       
; COLOR                    0                 linear       
;
; Output signature:
;
; Name                 Index             InterpMode DynIdx
; -------------------- ----- ---------------------- ------
; SV_Target                0                              
;
; Buffer Definitions:
;
;
; Resource Bindings:
;
; Name                                 Type  Format         Dim      ID      HLSL Bind  Count
; ------------------------------ ---------- ------- ----------- ------- -------------- ------
;
;
; ViewId state:
;
; Number of inputs: 12, outputs: 4
; Outputs dependent on ViewId: {  }
; Inputs contributing to computation of Outputs:
;   output 0 depends on inputs: { 8 }
;   output 1 depends on inputs: { 9 }
;   output 2 depends on inputs: { 10 }
;   output 3 depends on inputs: { 11 }
;
target datalayout = "e-m:e-p:32:32-i1:32-i8:32-i16:32-i32:32-i64:64-f16:32-f32:32-f64:64-n8:16:32:64"
target triple = "dxil-ms-dx"

define void @main() {
  %1 = call float @dx.op.loadInput.f32(i32 4, i32 2, i32 0, i8 0, i32 undef)  ; LoadInput(inputSigId,rowIndex,colIndex,gsVertexAxis)
  %2 = call float @dx.op.loadInput.f32(i32 4, i32 2, i32 0, i8 1, i32 undef)  ; LoadInput(inputSigId,rowIndex,colIndex,gsVertexAxis)
  %3 = call float @dx.op.loadInput.f32(i32 4, i32 2, i32 0, i8 2, i32 undef)  ; LoadInput(inputSigId,rowIndex,colIndex,gsVertexAxis)
  %4 = call float @dx.op.loadInput.f32(i32 4, i32 2, i32 0, i8 3, i32 undef)  ; LoadInput(inputSigId,rowIndex,colIndex,gsVertexAxis)
  call void @dx.op.storeOutput.f32(i32 5, i32 0, i32 0, i8 0, float %1)  ; StoreOutput(outputSigId,rowIndex,colIndex,value)
  call void @dx.op.storeOutput.f32(i32 5, i32 0, i32 0, i8 1, float %2)  ; StoreOutput(outputSigId,rowIndex,colIndex,value)
  call void @dx.op.storeOutput.f32(i32 5, i32 0, i32 0, i8 2, float %3)  ; StoreOutput(outputSigId,rowIndex,colIndex,value)
  call void @dx.op.storeOutput.f32(i32 5, i32 0, i32 0, i8 3, float %4)  ; StoreOutput(outputSigId,rowIndex,colIndex,value)
  ret void
}

; Function Attrs: nounwind readnone
declare float @dx.op.loadInput.f32(i32, i32, i32, i8, i32) #0

; Function Attrs: nounwind
declare void @dx.op.storeOutput.f32(i32, i32, i32, i8, float) #1

attributes #0 = { nounwind readnone }
attributes #1 = { nounwind }

!llvm.ident = !{!0}
!dx.version = !{!1}
!dx.valver = !{!2}
!dx.shaderModel = !{!3}
!dx.viewIdState = !{!4}
!dx.entryPoints = !{!5}

!0 = !{!"clang version 3.7 (tags/RELEASE_370/final)"}
!1 = !{i32 1, i32 0}
!2 = !{i32 1, i32 6}
!3 = !{!"ps", i32 6, i32 0}
!4 = !{[14 x i32] [i32 12, i32 4, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 1, i32 2, i32 4, i32 8]}
!5 = !{void ()* @main, !"main", !6, null, null}
!6 = !{!7, !13, null}
!7 = !{!8, !10, !11}
!8 = !{i32 0, !"SV_Position", i8 9, i8 3, !9, i8 4, i32 1, i8 4, i32 0, i8 0, null}
!9 = !{i32 0}
!10 = !{i32 1, !"TEXCOORD", i8 9, i8 0, !9, i8 2, i32 1, i8 2, i32 1, i8 0, null}
!11 = !{i32 2, !"COLOR", i8 9, i8 0, !9, i8 2, i32 1, i8 4, i32 2, i8 0, !12}
!12 = !{i32 3, i32 15}
!13 = !{!14}
!14 = !{i32 0, !"SV_Target", i8 9, i8 16, !9, i8 0, i32 1, i8 4, i32 0, i8 0, !12}

#endif

const unsigned char g_main[] = {
  0x44, 0x58, 0x42, 0x43, 0xc6, 0x39, 0x47, 0xb6, 0xed, 0x4d, 0x6d, 0xf1,
  0x86, 0xee, 0x4e, 0xfd, 0xd8, 0xdd, 0x81, 0x79, 0x01, 0x00, 0x00, 0x00,
  0xf1, 0x0c, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00,
  0x50, 0x00, 0x00, 0x00, 0xdb, 0x00, 0x00, 0x00, 0x15, 0x01, 0x00, 0x00,
  0xe5, 0x01, 0x00, 0x00, 0x1d, 0x02, 0x00, 0x00, 0xb5, 0x07, 0x00, 0x00,
  0xd1, 0x07, 0x00, 0x00, 0x53, 0x46, 0x49, 0x30, 0x08, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x49, 0x53, 0x47, 0x31,
  0x83, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x68, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x74, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x03, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7d, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00,
  0x02, 0x00, 0x00, 0x00, 0x0f, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x53, 0x56, 0x5f, 0x50, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x00,
  0x54, 0x45, 0x58, 0x43, 0x4f, 0x4f, 0x52, 0x44, 0x00, 0x43, 0x4f, 0x4c,
  0x4f, 0x52, 0x00, 0x4f, 0x53, 0x47, 0x31, 0x32, 0x00, 0x00, 0x00, 0x01,
  0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x28,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x03,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x53, 0x56, 0x5f, 0x54, 0x61, 0x72, 0x67, 0x65, 0x74,
  0x00, 0x50, 0x53, 0x56, 0x30, 0xc8, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff,
  0xff, 0x00, 0x00, 0x00, 0x00, 0x03, 0x01, 0x00, 0x03, 0x01, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x54, 0x45,
  0x58, 0x43, 0x4f, 0x4f, 0x52, 0x44, 0x00, 0x43, 0x4f, 0x4c, 0x4f, 0x52,
  0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x44,
  0x03, 0x03, 0x04, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x01, 0x01, 0x42, 0x00, 0x03, 0x02, 0x00, 0x00, 0x0a, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x02, 0x44, 0x00, 0x03, 0x02, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x44,
  0x10, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x01, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00,
  0x00, 0x08, 0x00, 0x00, 0x00, 0x52, 0x54, 0x53, 0x30, 0x30, 0x00, 0x00,
  0x00, 0x02, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x18, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00, 0x1d, 0x00, 0x00,
  0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x24, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00,
  0x00, 0x53, 0x54, 0x41, 0x54, 0x90, 0x05, 0x00, 0x00, 0x60, 0x00, 0x00,
  0x00, 0x64, 0x01, 0x00, 0x00, 0x44, 0x58, 0x49, 0x4c, 0x00, 0x01, 0x00,
  0x00, 0x10, 0x00, 0x00, 0x00, 0x78, 0x05, 0x00, 0x00, 0x42, 0x43, 0xc0,
  0xde, 0x21, 0x0c, 0x00, 0x00, 0x5b, 0x01, 0x00, 0x00, 0x0b, 0x82, 0x20,
  0x00, 0x02, 0x00, 0x00, 0x00, 0x13, 0x00, 0x00, 0x00, 0x07, 0x81, 0x23,
  0x91, 0x41, 0xc8, 0x04, 0x49, 0x06, 0x10, 0x32, 0x39, 0x92, 0x01, 0x84,
  0x0c, 0x25, 0x05, 0x08, 0x19, 0x1e, 0x04, 0x8b, 0x62, 0x80, 0x10, 0x45,
  0x02, 0x42, 0x92, 0x0b, 0x42, 0x84, 0x10, 0x32, 0x14, 0x38, 0x08, 0x18,
  0x4b, 0x0a, 0x32, 0x42, 0x88, 0x48, 0x90, 0x14, 0x20, 0x43, 0x46, 0x88,
  0xa5, 0x00, 0x19, 0x32, 0x42, 0xe4, 0x48, 0x0e, 0x90, 0x11, 0x22, 0xc4,
  0x50, 0x41, 0x51, 0x81, 0x8c, 0xe1, 0x83, 0xe5, 0x8a, 0x04, 0x21, 0x46,
  0x06, 0x51, 0x18, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x1b, 0x8c, 0xe0,
  0xff, 0xff, 0xff, 0xff, 0x07, 0x40, 0x02, 0xa8, 0x0d, 0x84, 0xf0, 0xff,
  0xff, 0xff, 0xff, 0x03, 0x20, 0x01, 0x00, 0x00, 0x00, 0x49, 0x18, 0x00,
  0x00, 0x02, 0x00, 0x00, 0x00, 0x13, 0x82, 0x60, 0x42, 0x20, 0x00, 0x00,
  0x00, 0x89, 0x20, 0x00, 0x00, 0x16, 0x00, 0x00, 0x00, 0x32, 0x22, 0x08,
  0x09, 0x20, 0x64, 0x85, 0x04, 0x13, 0x22, 0xa4, 0x84, 0x04, 0x13, 0x22,
  0xe3, 0x84, 0xa1, 0x90, 0x14, 0x12, 0x4c, 0x88, 0x8c, 0x0b, 0x84, 0x84,
  0x4c, 0x10, 0x3c, 0x23, 0x00, 0x25, 0x00, 0x8a, 0x19, 0x80, 0x39, 0x02,
  0x30, 0x98, 0x23, 0x40, 0x8a, 0x31, 0x44, 0x54, 0x44, 0x56, 0x0c, 0x20,
  0xa2, 0x1a, 0xc2, 0x81, 0x80, 0x61, 0x04, 0x62, 0x18, 0x46, 0x10, 0x86,
  0xbb, 0xa4, 0x29, 0xa2, 0x84, 0xc9, 0x4f, 0x91, 0x8b, 0x58, 0xd8, 0x03,
  0x18, 0x88, 0x48, 0x6c, 0x1e, 0x6a, 0x42, 0xc3, 0xf2, 0xa6, 0x03, 0x01,
  0x00, 0x13, 0x14, 0x72, 0xc0, 0x87, 0x74, 0x60, 0x87, 0x36, 0x68, 0x87,
  0x79, 0x68, 0x03, 0x72, 0xc0, 0x87, 0x0d, 0xaf, 0x50, 0x0e, 0x6d, 0xd0,
  0x0e, 0x7a, 0x50, 0x0e, 0x6d, 0x00, 0x0f, 0x7a, 0x30, 0x07, 0x72, 0xa0,
  0x07, 0x73, 0x20, 0x07, 0x6d, 0x90, 0x0e, 0x71, 0xa0, 0x07, 0x73, 0x20,
  0x07, 0x6d, 0x90, 0x0e, 0x78, 0xa0, 0x07, 0x73, 0x20, 0x07, 0x6d, 0x90,
  0x0e, 0x71, 0x60, 0x07, 0x7a, 0x30, 0x07, 0x72, 0xd0, 0x06, 0xe9, 0x30,
  0x07, 0x72, 0xa0, 0x07, 0x73, 0x20, 0x07, 0x6d, 0x90, 0x0e, 0x76, 0x40,
  0x07, 0x7a, 0x60, 0x07, 0x74, 0xd0, 0x06, 0xe6, 0x10, 0x07, 0x76, 0xa0,
  0x07, 0x73, 0x20, 0x07, 0x6d, 0x60, 0x0e, 0x73, 0x20, 0x07, 0x7a, 0x30,
  0x07, 0x72, 0xd0, 0x06, 0xe6, 0x60, 0x07, 0x74, 0xa0, 0x07, 0x76, 0x40,
  0x07, 0x6d, 0xe0, 0x0e, 0x78, 0xa0, 0x07, 0x71, 0x60, 0x07, 0x7a, 0x30,
  0x07, 0x72, 0xa0, 0x07, 0x76, 0x40, 0x07, 0x43, 0x9e, 0x00, 0x08, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x86, 0x3c, 0x06, 0x10,
  0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0c, 0x79, 0x10,
  0x20, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc8, 0x02,
  0x01, 0x10, 0x00, 0x00, 0x00, 0x32, 0x1e, 0x98, 0x14, 0x19, 0x11, 0x4c,
  0x90, 0x8c, 0x09, 0x26, 0x47, 0xc6, 0x04, 0x43, 0xa2, 0x12, 0x18, 0x01,
  0x28, 0x86, 0x02, 0x2b, 0x83, 0x42, 0x28, 0x87, 0x92, 0x28, 0x90, 0x02,
  0x2a, 0x82, 0xf2, 0xa0, 0x2a, 0x89, 0x32, 0x28, 0x84, 0x11, 0x80, 0x22,
  0x28, 0x10, 0xea, 0x19, 0x00, 0xf2, 0xb1, 0x1c, 0x86, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x08, 0x04, 0x02, 0x01, 0x00, 0x00, 0x79, 0x18, 0x00,
  0x00, 0x85, 0x00, 0x00, 0x00, 0x1a, 0x03, 0x4c, 0x90, 0x46, 0x02, 0x13,
  0x44, 0x35, 0x18, 0x63, 0x0b, 0x73, 0x3b, 0x03, 0xb1, 0x2b, 0x93, 0x9b,
  0x4b, 0x7b, 0x73, 0x03, 0x99, 0x71, 0xb9, 0x01, 0x41, 0xa1, 0x0b, 0x3b,
  0x9b, 0x7b, 0x91, 0x2a, 0x62, 0x2a, 0x0a, 0x9a, 0x2a, 0xfa, 0x9a, 0xb9,
  0x81, 0x79, 0x31, 0x4b, 0x73, 0x0b, 0x63, 0x4b, 0xd9, 0x10, 0x04, 0x13,
  0x04, 0x62, 0x98, 0x20, 0x10, 0xc4, 0x06, 0x61, 0x20, 0x36, 0x08, 0x04,
  0x41, 0x01, 0x6e, 0x6e, 0x82, 0x40, 0x14, 0x1b, 0x86, 0x03, 0x21, 0x26,
  0x08, 0x4d, 0x35, 0x41, 0x20, 0x0c, 0x0e, 0x70, 0x6f, 0x73, 0x13, 0x04,
  0xe2, 0x98, 0x20, 0x10, 0x08, 0x97, 0x29, 0xab, 0x2f, 0xa8, 0xa7, 0xa9,
  0x24, 0xaa, 0xa4, 0x27, 0xa7, 0x09, 0x02, 0x91, 0x4c, 0x10, 0x08, 0x65,
  0x03, 0x82, 0x30, 0x0d, 0xe1, 0x3c, 0x50, 0xc4, 0x81, 0xae, 0x0c, 0x6f,
  0x82, 0x40, 0x2c, 0x4c, 0xa8, 0x8a, 0xb0, 0x86, 0x9e, 0x9e, 0xa4, 0x88,
  0x60, 0x36, 0x20, 0xc8, 0xd4, 0x50, 0x4e, 0x05, 0x45, 0x2c, 0xc6, 0xde,
  0xd8, 0xde, 0xe4, 0x26, 0x08, 0x04, 0x43, 0x63, 0xe8, 0x89, 0xe9, 0x49,
  0x0a, 0x66, 0x03, 0x82, 0x5c, 0x0d, 0xe6, 0x64, 0x50, 0xb4, 0x81, 0x58,
  0x24, 0x4b, 0xdb, 0x30, 0x10, 0xca, 0x36, 0x41, 0x10, 0x80, 0x0d, 0xc0,
  0x86, 0x81, 0xf0, 0xbc, 0x0d, 0xc1, 0xb7, 0x61, 0x18, 0x3a, 0x30, 0x98,
  0x20, 0x38, 0xd6, 0x86, 0x40, 0x0c, 0x48, 0xb4, 0x85, 0xa5, 0xb9, 0x71,
  0x99, 0xb2, 0xfa, 0x82, 0x7a, 0x9b, 0x4b, 0xa3, 0x4b, 0x7b, 0x73, 0x9b,
  0x20, 0x14, 0xcf, 0x04, 0xa1, 0x80, 0x36, 0x04, 0xc4, 0x04, 0xa1, 0x88,
  0x26, 0x08, 0x85, 0xb4, 0x61, 0x21, 0xca, 0xc0, 0x0c, 0xce, 0x00, 0x0d,
  0xd2, 0x60, 0x48, 0x03, 0x42, 0x0d, 0x00, 0x22, 0x54, 0x45, 0x58, 0x43,
  0x4f, 0x4f, 0x52, 0x44, 0x13, 0x84, 0x62, 0xda, 0xb0, 0x0c, 0x6c, 0x60,
  0x06, 0x6a, 0x80, 0x06, 0x6d, 0x30, 0xb4, 0xc1, 0xa0, 0x06, 0xc0, 0x04,
  0x81, 0x68, 0x58, 0x0c, 0x3d, 0x31, 0x3d, 0x49, 0x4d, 0x10, 0x08, 0x67,
  0x83, 0xd0, 0xc4, 0xc1, 0x86, 0xe5, 0x0d, 0xe0, 0xc0, 0x0c, 0xd4, 0x00,
  0x0d, 0xda, 0x60, 0x48, 0x83, 0x37, 0x50, 0x03, 0x39, 0xd8, 0x30, 0xac,
  0x81, 0x1b, 0xcc, 0x01, 0x93, 0x29, 0xab, 0x2f, 0xaa, 0x30, 0xb9, 0xb3,
  0x32, 0xba, 0x09, 0x42, 0x41, 0x6d, 0x58, 0x88, 0x3a, 0x30, 0x03, 0x3b,
  0x40, 0x03, 0x35, 0x18, 0xd2, 0x80, 0x50, 0x03, 0x39, 0xd8, 0x10, 0xdc,
  0xc1, 0x86, 0x81, 0x0e, 0xf0, 0x00, 0xd8, 0x50, 0x74, 0x64, 0x90, 0x07,
  0x00, 0xc0, 0x22, 0xcd, 0x6d, 0x8e, 0x6e, 0x8e, 0xc6, 0x5c, 0xda, 0xd9,
  0x17, 0x1b, 0x19, 0x8d, 0xb9, 0xb4, 0xb3, 0xaf, 0x39, 0xba, 0x0d, 0xc6,
  0x1e, 0x44, 0x7c, 0xe0, 0xf4, 0x81, 0x53, 0x85, 0x8d, 0xcd, 0xae, 0xcd,
  0x25, 0x8d, 0xac, 0xcc, 0x8d, 0x6e, 0x4a, 0x10, 0x54, 0x21, 0xc3, 0x73,
  0xb1, 0x2b, 0x93, 0x9b, 0x4b, 0x7b, 0x73, 0x9b, 0x12, 0x10, 0x4d, 0xc8,
  0xf0, 0x5c, 0xec, 0xc2, 0xd8, 0xec, 0xca, 0xe4, 0xa6, 0x04, 0x45, 0x1d,
  0x32, 0x3c, 0x97, 0x39, 0xb4, 0x30, 0xb2, 0x32, 0xb9, 0xa6, 0x37, 0xb2,
  0x32, 0xb6, 0x29, 0x01, 0x52, 0x89, 0x0c, 0xcf, 0x85, 0x2e, 0x0f, 0xae,
  0x2c, 0xc8, 0xcd, 0xed, 0x8d, 0x2e, 0x8c, 0x2e, 0xed, 0xcd, 0x6d, 0x6e,
  0x8a, 0xb0, 0x81, 0x41, 0x1d, 0x32, 0x3c, 0x17, 0xbb, 0xb4, 0xb2, 0xbb,
  0x24, 0xb2, 0x29, 0xba, 0x30, 0xba, 0xb2, 0x29, 0x81, 0x18, 0xd4, 0x21,
  0xc3, 0x73, 0x29, 0x73, 0xa3, 0x93, 0xcb, 0x83, 0x7a, 0x4b, 0x73, 0xa3,
  0x9b, 0x9b, 0x12, 0xe4, 0x41, 0x17, 0x32, 0x3c, 0x97, 0xb1, 0xb7, 0x3a,
  0x37, 0xba, 0x32, 0xb9, 0xb9, 0x29, 0x41, 0x1f, 0x00, 0x79, 0x18, 0x00,
  0x00, 0x4c, 0x00, 0x00, 0x00, 0x33, 0x08, 0x80, 0x1c, 0xc4, 0xe1, 0x1c,
  0x66, 0x14, 0x01, 0x3d, 0x88, 0x43, 0x38, 0x84, 0xc3, 0x8c, 0x42, 0x80,
  0x07, 0x79, 0x78, 0x07, 0x73, 0x98, 0x71, 0x0c, 0xe6, 0x00, 0x0f, 0xed,
  0x10, 0x0e, 0xf4, 0x80, 0x0e, 0x33, 0x0c, 0x42, 0x1e, 0xc2, 0xc1, 0x1d,
  0xce, 0xa1, 0x1c, 0x66, 0x30, 0x05, 0x3d, 0x88, 0x43, 0x38, 0x84, 0x83,
  0x1b, 0xcc, 0x03, 0x3d, 0xc8, 0x43, 0x3d, 0x8c, 0x03, 0x3d, 0xcc, 0x78,
  0x8c, 0x74, 0x70, 0x07, 0x7b, 0x08, 0x07, 0x79, 0x48, 0x87, 0x70, 0x70,
  0x07, 0x7a, 0x70, 0x03, 0x76, 0x78, 0x87, 0x70, 0x20, 0x87, 0x19, 0xcc,
  0x11, 0x0e, 0xec, 0x90, 0x0e, 0xe1, 0x30, 0x0f, 0x6e, 0x30, 0x0f, 0xe3,
  0xf0, 0x0e, 0xf0, 0x50, 0x0e, 0x33, 0x10, 0xc4, 0x1d, 0xde, 0x21, 0x1c,
  0xd8, 0x21, 0x1d, 0xc2, 0x61, 0x1e, 0x66, 0x30, 0x89, 0x3b, 0xbc, 0x83,
  0x3b, 0xd0, 0x43, 0x39, 0xb4, 0x03, 0x3c, 0xbc, 0x83, 0x3c, 0x84, 0x03,
  0x3b, 0xcc, 0xf0, 0x14, 0x76, 0x60, 0x07, 0x7b, 0x68, 0x07, 0x37, 0x68,
  0x87, 0x72, 0x68, 0x07, 0x37, 0x80, 0x87, 0x70, 0x90, 0x87, 0x70, 0x60,
  0x07, 0x76, 0x28, 0x07, 0x76, 0xf8, 0x05, 0x76, 0x78, 0x87, 0x77, 0x80,
  0x87, 0x5f, 0x08, 0x87, 0x71, 0x18, 0x87, 0x72, 0x98, 0x87, 0x79, 0x98,
  0x81, 0x2c, 0xee, 0xf0, 0x0e, 0xee, 0xe0, 0x0e, 0xf5, 0xc0, 0x0e, 0xec,
  0x30, 0x03, 0x62, 0xc8, 0xa1, 0x1c, 0xe4, 0xa1, 0x1c, 0xcc, 0xa1, 0x1c,
  0xe4, 0xa1, 0x1c, 0xdc, 0x61, 0x1c, 0xca, 0x21, 0x1c, 0xc4, 0x81, 0x1d,
  0xca, 0x61, 0x06, 0xd6, 0x90, 0x43, 0x39, 0xc8, 0x43, 0x39, 0x98, 0x43,
  0x39, 0xc8, 0x43, 0x39, 0xb8, 0xc3, 0x38, 0x94, 0x43, 0x38, 0x88, 0x03,
  0x3b, 0x94, 0xc3, 0x2f, 0xbc, 0x83, 0x3c, 0xfc, 0x82, 0x3b, 0xd4, 0x03,
  0x3b, 0xb0, 0xc3, 0x0c, 0xc4, 0x21, 0x07, 0x7c, 0x70, 0x03, 0x7a, 0x28,
  0x87, 0x76, 0x80, 0x87, 0x19, 0xd1, 0x43, 0x0e, 0xf8, 0xe0, 0x06, 0xe4,
  0x20, 0x0e, 0xe7, 0xe0, 0x06, 0xf6, 0x10, 0x0e, 0xf2, 0xc0, 0x0e, 0xe1,
  0x90, 0x0f, 0xef, 0x50, 0x0f, 0xf4, 0x00, 0x00, 0x00, 0x71, 0x20, 0x00,
  0x00, 0x0b, 0x00, 0x00, 0x00, 0x16, 0x30, 0x0d, 0x97, 0xef, 0x3c, 0xfe,
  0xe2, 0x00, 0x83, 0xd8, 0x3c, 0xd4, 0xe4, 0x17, 0xb7, 0x6d, 0x02, 0xd5,
  0x70, 0xf9, 0xce, 0xe3, 0x4b, 0x93, 0x13, 0x11, 0x28, 0x35, 0x3d, 0xd4,
  0xe4, 0x17, 0xb7, 0x6d, 0x00, 0x04, 0x03, 0x20, 0x0d, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x48, 0x41, 0x53, 0x48, 0x14, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0xe1, 0x4a, 0xd5, 0x78, 0xe4, 0x4f, 0xd6,
  0x12, 0x0d, 0x86, 0x23, 0xf7, 0x0e, 0x82, 0x21, 0x40, 0x44, 0x58, 0x49,
  0x4c, 0x18, 0x05, 0x00, 0x00, 0x60, 0x00, 0x00, 0x00, 0x46, 0x01, 0x00,
  0x00, 0x44, 0x58, 0x49, 0x4c, 0x00, 0x01, 0x00, 0x00, 0x10, 0x00, 0x00,
  0x00, 0x00, 0x05, 0x00, 0x00, 0x42, 0x43, 0xc0, 0xde, 0x21, 0x0c, 0x00,
  0x00, 0x3d, 0x01, 0x00, 0x00, 0x0b, 0x82, 0x20, 0x00, 0x02, 0x00, 0x00,
  0x00, 0x13, 0x00, 0x00, 0x00, 0x07, 0x81, 0x23, 0x91, 0x41, 0xc8, 0x04,
  0x49, 0x06, 0x10, 0x32, 0x39, 0x92, 0x01, 0x84, 0x0c, 0x25, 0x05, 0x08,
  0x19, 0x1e, 0x04, 0x8b, 0x62, 0x80, 0x10, 0x45, 0x02, 0x42, 0x92, 0x0b,
  0x42, 0x84, 0x10, 0x32, 0x14, 0x38, 0x08, 0x18, 0x4b, 0x0a, 0x32, 0x42,
  0x88, 0x48, 0x90, 0x14, 0x20, 0x43, 0x46, 0x88, 0xa5, 0x00, 0x19, 0x32,
  0x42, 0xe4, 0x48, 0x0e, 0x90, 0x11, 0x22, 0xc4, 0x50, 0x41, 0x51, 0x81,
  0x8c, 0xe1, 0x83, 0xe5, 0x8a, 0x04, 0x21, 0x46, 0x06, 0x51, 0x18, 0x00,
  0x00, 0x06, 0x00, 0x00, 0x00, 0x1b, 0x8c, 0xe0, 0xff, 0xff, 0xff, 0xff,
  0x07, 0x40, 0x02, 0xa8, 0x0d, 0x84, 0xf0, 0xff, 0xff, 0xff, 0xff, 0x03,
  0x20, 0x01, 0x00, 0x00, 0x00, 0x49, 0x18, 0x00, 0x00, 0x02, 0x00, 0x00,
  0x00, 0x13, 0x82, 0x60, 0x42, 0x20, 0x00, 0x00, 0x00, 0x89, 0x20, 0x00,
  0x00, 0x0f, 0x00, 0x00, 0x00, 0x32, 0x22, 0x08, 0x09, 0x20, 0x64, 0x85,
  0x04, 0x13, 0x22, 0xa4, 0x84, 0x04, 0x13, 0x22, 0xe3, 0x84, 0xa1, 0x90,
  0x14, 0x12, 0x4c, 0x88, 0x8c, 0x0b, 0x84, 0x84, 0x4c, 0x10, 0x30, 0x23,
  0x00, 0x25, 0x00, 0x8a, 0x19, 0x80, 0x39, 0x02, 0x30, 0x98, 0x23, 0x40,
  0x8a, 0x31, 0x44, 0x54, 0x44, 0x56, 0x0c, 0x20, 0xa2, 0x1a, 0xc2, 0x81,
  0x80, 0x74, 0x20, 0x00, 0x00, 0x13, 0x14, 0x72, 0xc0, 0x87, 0x74, 0x60,
  0x87, 0x36, 0x68, 0x87, 0x79, 0x68, 0x03, 0x72, 0xc0, 0x87, 0x0d, 0xaf,
  0x50, 0x0e, 0x6d, 0xd0, 0x0e, 0x7a, 0x50, 0x0e, 0x6d, 0x00, 0x0f, 0x7a,
  0x30, 0x07, 0x72, 0xa0, 0x07, 0x73, 0x20, 0x07, 0x6d, 0x90, 0x0e, 0x71,
  0xa0, 0x07, 0x73, 0x20, 0x07, 0x6d, 0x90, 0x0e, 0x78, 0xa0, 0x07, 0x73,
  0x20, 0x07, 0x6d, 0x90, 0x0e, 0x71, 0x60, 0x07, 0x7a, 0x30, 0x07, 0x72,
  0xd0, 0x06, 0xe9, 0x30, 0x07, 0x72, 0xa0, 0x07, 0x73, 0x20, 0x07, 0x6d,
  0x90, 0x0e, 0x76, 0x40, 0x07, 0x7a, 0x60, 0x07, 0x74, 0xd0, 0x06, 0xe6,
  0x10, 0x07, 0x76, 0xa0, 0x07, 0x73, 0x20, 0x07, 0x6d, 0x60, 0x0e, 0x73,
  0x20, 0x07, 0x7a, 0x30, 0x07, 0x72, 0xd0, 0x06, 0xe6, 0x60, 0x07, 0x74,
  0xa0, 0x07, 0x76, 0x40, 0x07, 0x6d, 0xe0, 0x0e, 0x78, 0xa0, 0x07, 0x71,
  0x60, 0x07, 0x7a, 0x30, 0x07, 0x72, 0xa0, 0x07, 0x76, 0x40, 0x07, 0x43,
  0x9e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x86, 0x3c, 0x06, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x0c, 0x79, 0x10, 0x20, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0xc8, 0x02, 0x01, 0x0d, 0x00, 0x00, 0x00, 0x32, 0x1e, 0x98,
  0x14, 0x19, 0x11, 0x4c, 0x90, 0x8c, 0x09, 0x26, 0x47, 0xc6, 0x04, 0x43,
  0xa2, 0x12, 0x18, 0x01, 0x28, 0x86, 0x22, 0x28, 0x83, 0xf2, 0xa0, 0x2a,
  0x89, 0x32, 0x28, 0x84, 0x11, 0x80, 0x22, 0x28, 0x10, 0xda, 0xb1, 0x1c,
  0x86, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x04, 0x02, 0x01, 0x00,
  0x00, 0x79, 0x18, 0x00, 0x00, 0x51, 0x00, 0x00, 0x00, 0x1a, 0x03, 0x4c,
  0x90, 0x46, 0x02, 0x13, 0x44, 0x35, 0x18, 0x63, 0x0b, 0x73, 0x3b, 0x03,
  0xb1, 0x2b, 0x93, 0x9b, 0x4b, 0x7b, 0x73, 0x03, 0x99, 0x71, 0xb9, 0x01,
  0x41, 0xa1, 0x0b, 0x3b, 0x9b, 0x7b, 0x91, 0x2a, 0x62, 0x2a, 0x0a, 0x9a,
  0x2a, 0xfa, 0x9a, 0xb9, 0x81, 0x79, 0x31, 0x4b, 0x73, 0x0b, 0x63, 0x4b,
  0xd9, 0x10, 0x04, 0x13, 0x04, 0x62, 0x98, 0x20, 0x10, 0xc4, 0x06, 0x61,
  0x20, 0x26, 0x08, 0x44, 0xb1, 0x41, 0x18, 0x0c, 0x0a, 0x70, 0x73, 0x1b,
  0x06, 0xc4, 0x20, 0x26, 0x08, 0xcb, 0xb3, 0x21, 0x50, 0x26, 0x08, 0x02,
  0x40, 0xa2, 0x2d, 0x2c, 0xcd, 0x8d, 0xcb, 0x94, 0xd5, 0x17, 0xd4, 0xdb,
  0x5c, 0x1a, 0x5d, 0xda, 0x9b, 0xdb, 0x04, 0xa1, 0x48, 0x26, 0x08, 0x85,
  0xb2, 0x21, 0x20, 0x26, 0x08, 0xc5, 0x32, 0x41, 0x28, 0x98, 0x0d, 0x0b,
  0xe1, 0x3c, 0x50, 0x24, 0x0d, 0x12, 0x31, 0x01, 0x44, 0xa8, 0x8a, 0xb0,
  0x86, 0x9e, 0x9e, 0xa4, 0x88, 0x26, 0x08, 0x45, 0xb3, 0x61, 0x19, 0xaa,
  0x67, 0x8a, 0xac, 0xc1, 0x1a, 0x26, 0x60, 0x82, 0x40, 0x18, 0x2c, 0x86,
  0x9e, 0x98, 0x9e, 0xa4, 0x26, 0x08, 0xc4, 0x31, 0x41, 0x20, 0x90, 0x0d,
  0x82, 0xb6, 0x6d, 0x58, 0xb0, 0xec, 0x99, 0x22, 0x6b, 0x90, 0xb0, 0x89,
  0xdb, 0x30, 0x50, 0x57, 0xc7, 0x64, 0xca, 0xea, 0x8b, 0x2a, 0x4c, 0xee,
  0xac, 0x8c, 0x6e, 0x82, 0x50, 0x38, 0x1b, 0x16, 0xe2, 0x7b, 0xc0, 0x20,
  0x9a, 0x06, 0x89, 0x98, 0xb8, 0x0d, 0x41, 0x18, 0x6c, 0x18, 0x3c, 0x31,
  0x00, 0x36, 0x14, 0x4c, 0x33, 0x06, 0x00, 0x50, 0x85, 0x8d, 0xcd, 0xae,
  0xcd, 0x25, 0x8d, 0xac, 0xcc, 0x8d, 0x6e, 0x4a, 0x10, 0x54, 0x21, 0xc3,
  0x73, 0xb1, 0x2b, 0x93, 0x9b, 0x4b, 0x7b, 0x73, 0x9b, 0x12, 0x10, 0x4d,
  0xc8, 0xf0, 0x5c, 0xec, 0xc2, 0xd8, 0xec, 0xca, 0xe4, 0xa6, 0x04, 0x46,
  0x1d, 0x32, 0x3c, 0x97, 0x39, 0xb4, 0x30, 0xb2, 0x32, 0xb9, 0xa6, 0x37,
  0xb2, 0x32, 0xb6, 0x29, 0x01, 0x52, 0x87, 0x0c, 0xcf, 0xc5, 0x2e, 0xad,
  0xec, 0x2e, 0x89, 0x6c, 0x8a, 0x2e, 0x8c, 0xae, 0x6c, 0x4a, 0xa0, 0xd4,
  0x21, 0xc3, 0x73, 0x29, 0x73, 0xa3, 0x93, 0xcb, 0x83, 0x7a, 0x4b, 0x73,
  0xa3, 0x9b, 0x9b, 0x12, 0x8c, 0x01, 0x00, 0x00, 0x00, 0x79, 0x18, 0x00,
  0x00, 0x4c, 0x00, 0x00, 0x00, 0x33, 0x08, 0x80, 0x1c, 0xc4, 0xe1, 0x1c,
  0x66, 0x14, 0x01, 0x3d, 0x88, 0x43, 0x38, 0x84, 0xc3, 0x8c, 0x42, 0x80,
  0x07, 0x79, 0x78, 0x07, 0x73, 0x98, 0x71, 0x0c, 0xe6, 0x00, 0x0f, 0xed,
  0x10, 0x0e, 0xf4, 0x80, 0x0e, 0x33, 0x0c, 0x42, 0x1e, 0xc2, 0xc1, 0x1d,
  0xce, 0xa1, 0x1c, 0x66, 0x30, 0x05, 0x3d, 0x88, 0x43, 0x38, 0x84, 0x83,
  0x1b, 0xcc, 0x03, 0x3d, 0xc8, 0x43, 0x3d, 0x8c, 0x03, 0x3d, 0xcc, 0x78,
  0x8c, 0x74, 0x70, 0x07, 0x7b, 0x08, 0x07, 0x79, 0x48, 0x87, 0x70, 0x70,
  0x07, 0x7a, 0x70, 0x03, 0x76, 0x78, 0x87, 0x70, 0x20, 0x87, 0x19, 0xcc,
  0x11, 0x0e, 0xec, 0x90, 0x0e, 0xe1, 0x30, 0x0f, 0x6e, 0x30, 0x0f, 0xe3,
  0xf0, 0x0e, 0xf0, 0x50, 0x0e, 0x33, 0x10, 0xc4, 0x1d, 0xde, 0x21, 0x1c,
  0xd8, 0x21, 0x1d, 0xc2, 0x61, 0x1e, 0x66, 0x30, 0x89, 0x3b, 0xbc, 0x83,
  0x3b, 0xd0, 0x43, 0x39, 0xb4, 0x03, 0x3c, 0xbc, 0x83, 0x3c, 0x84, 0x03,
  0x3b, 0xcc, 0xf0, 0x14, 0x76, 0x60, 0x07, 0x7b, 0x68, 0x07, 0x37, 0x68,
  0x87, 0x72, 0x68, 0x07, 0x37, 0x80, 0x87, 0x70, 0x90, 0x87, 0x70, 0x60,
  0x07, 0x76, 0x28, 0x07, 0x76, 0xf8, 0x05, 0x76, 0x78, 0x87, 0x77, 0x80,
  0x87, 0x5f, 0x08, 0x87, 0x71, 0x18, 0x87, 0x72, 0x98, 0x87, 0x79, 0x98,
  0x81, 0x2c, 0xee, 0xf0, 0x0e, 0xee, 0xe0, 0x0e, 0xf5, 0xc0, 0x0e, 0xec,
  0x30, 0x03, 0x62, 0xc8, 0xa1, 0x1c, 0xe4, 0xa1, 0x1c, 0xcc, 0xa1, 0x1c,
  0xe4, 0xa1, 0x1c, 0xdc, 0x61, 0x1c, 0xca, 0x21, 0x1c, 0xc4, 0x81, 0x1d,
  0xca, 0x61, 0x06, 0xd6, 0x90, 0x43, 0x39, 0xc8, 0x43, 0x39, 0x98, 0x43,
  0x39, 0xc8, 0x43, 0x39, 0xb8, 0xc3, 0x38, 0x94, 0x43, 0x38, 0x88, 0x03,
  0x3b, 0x94, 0xc3, 0x2f, 0xbc, 0x83, 0x3c, 0xfc, 0x82, 0x3b, 0xd4, 0x03,
  0x3b, 0xb0, 0xc3, 0x0c, 0xc4, 0x21, 0x07, 0x7c, 0x70, 0x03, 0x7a, 0x28,
  0x87, 0x76, 0x80, 0x87, 0x19, 0xd1, 0x43, 0x0e, 0xf8, 0xe0, 0x06, 0xe4,
  0x20, 0x0e, 0xe7, 0xe0, 0x06, 0xf6, 0x10, 0x0e, 0xf2, 0xc0, 0x0e, 0xe1,
  0x90, 0x0f, 0xef, 0x50, 0x0f, 0xf4, 0x00, 0x00, 0x00, 0x71, 0x20, 0x00,
  0x00, 0x0b, 0x00, 0x00, 0x00, 0x16, 0x30, 0x0d, 0x97, 0xef, 0x3c, 0xfe,
  0xe2, 0x00, 0x83, 0xd8, 0x3c, 0xd4, 0xe4, 0x17, 0xb7, 0x6d, 0x02, 0xd5,
  0x70, 0xf9, 0xce, 0xe3, 0x4b, 0x93, 0x13, 0x11, 0x28, 0x35, 0x3d, 0xd4,
  0xe4, 0x17, 0xb7, 0x6d, 0x00, 0x04, 0x03, 0x20, 0x0d, 0x00, 0x00, 0x00,
  0x00, 0x61, 0x20, 0x00, 0x00, 0x1e, 0x00, 0x00, 0x00, 0x13, 0x04, 0x41,
  0x2c, 0x10, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x44, 0x85, 0x30,
  0x03, 0x50, 0x0a, 0x54, 0x25, 0x00, 0x00, 0x00, 0x00, 0x23, 0x06, 0x09,
  0x00, 0x82, 0x60, 0x60, 0x4c, 0x84, 0x03, 0x21, 0xc3, 0x88, 0x41, 0x02,
  0x80, 0x20, 0x18, 0x18, 0x54, 0xf1, 0x44, 0x02, 0x31, 0x62, 0x90, 0x00,
  0x20, 0x08, 0x06, 0x46, 0x65, 0x40, 0x52, 0x52, 0x8c, 0x18, 0x24, 0x00,
  0x08, 0x82, 0x81, 0x61, 0x1d, 0xd1, 0xd4, 0x18, 0x23, 0x06, 0x09, 0x00,
  0x82, 0x60, 0x80, 0x58, 0x06, 0x45, 0x31, 0xc4, 0x88, 0x41, 0x02, 0x80,
  0x20, 0x18, 0x20, 0x96, 0x41, 0x51, 0xc5, 0x30, 0x62, 0x90, 0x00, 0x20,
  0x08, 0x06, 0x88, 0x65, 0x50, 0xd4, 0x22, 0x8c, 0x18, 0x24, 0x00, 0x08,
  0x82, 0x01, 0x62, 0x19, 0x14, 0xe5, 0x04, 0x08, 0x00, 0x00, 0x00, 0x00,
  0x00
};
