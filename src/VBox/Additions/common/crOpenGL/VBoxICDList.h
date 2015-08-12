/** @file
 *
 * VirtualBox Windows NT/2000/XP guest OpenGL ICD
 *
 * Copyright (C) 2006-2015 Oracle Corporation
 *
 * This file is part of VirtualBox Open Source Edition (OSE), as
 * available from http://www.virtualbox.org. This file is free software;
 * you can redistribute it and/or modify it under the terms of the GNU
 * General Public License (GPL) as published by the Free Software
 * Foundation, in version 2 as it comes in the "COPYING" file of the
 * VirtualBox OSE distribution. VirtualBox OSE is distributed in the
 * hope that it will be useful, but WITHOUT ANY WARRANTY of any kind.
 */

/*
 * Mesa 3-D graphics library
 * Version:  6.1
 *
 * Copyright (C) 1999-2004  Brian Paul   All Rights Reserved.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included
 * in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
 * OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL
 * BRIAN PAUL BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN
 * AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
 * CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 */

/*
 * File name: icd.c
 * Author:    Gregor Anich
 *
 * ICD (Installable Client Driver) interface.
 * Based on the windows GDI/WGL driver.
 */

ICD_ENTRY(NewList)				/* 0 */
ICD_ENTRY(EndList)				/* 1 */
ICD_ENTRY(CallList)				/* 2 */
ICD_ENTRY(CallLists)				/* 3 */
ICD_ENTRY(DeleteLists)			/* 4 */
ICD_ENTRY(GenLists)				/* 5 */
ICD_ENTRY(ListBase)				/* 6 */
ICD_ENTRY(Begin)					/* 7 */
ICD_ENTRY(Bitmap)					/* 8 */
ICD_ENTRY(Color3b)				/* 9 */
ICD_ENTRY(Color3bv)				/* 10 */
ICD_ENTRY(Color3d)				/* 11 */
ICD_ENTRY(Color3dv)				/* 12 */
ICD_ENTRY(Color3f)				/* 13 */
ICD_ENTRY(Color3fv)				/* 14 */
ICD_ENTRY(Color3i)				/* 15 */
ICD_ENTRY(Color3iv)				/* 16 */
ICD_ENTRY(Color3s)				/* 17 */
ICD_ENTRY(Color3sv)				/* 18 */
ICD_ENTRY(Color3ub)				/* 19 */
ICD_ENTRY(Color3ubv)				/* 20 */
ICD_ENTRY(Color3ui)				/* 21 */
ICD_ENTRY(Color3uiv)				/* 22 */
ICD_ENTRY(Color3us)				/* 23 */
ICD_ENTRY(Color3usv)				/* 24 */
ICD_ENTRY(Color4b)				/* 25 */
ICD_ENTRY(Color4bv)				/* 26 */
ICD_ENTRY(Color4d)				/* 27 */
ICD_ENTRY(Color4dv)				/* 28 */
ICD_ENTRY(Color4f)				/* 29 */
ICD_ENTRY(Color4fv)				/* 30 */
ICD_ENTRY(Color4i)				/* 31 */
ICD_ENTRY(Color4iv)				/* 32 */
ICD_ENTRY(Color4s)				/* 33 */
ICD_ENTRY(Color4sv)				/* 34 */
ICD_ENTRY(Color4ub)				/* 35 */
ICD_ENTRY(Color4ubv)				/* 36 */
ICD_ENTRY(Color4ui)				/* 37 */
ICD_ENTRY(Color4uiv)				/* 38 */
ICD_ENTRY(Color4us)				/* 39 */
ICD_ENTRY(Color4usv)				/* 40 */
ICD_ENTRY(EdgeFlag)				/* 41 */
ICD_ENTRY(EdgeFlagv)				/* 42 */
ICD_ENTRY(End)					/* 43 */
ICD_ENTRY(Indexd)					/* 44 */
ICD_ENTRY(Indexdv)				/* 45 */
ICD_ENTRY(Indexf)					/* 46 */
ICD_ENTRY(Indexfv)				/* 47 */
ICD_ENTRY(Indexi)					/* 48 */
ICD_ENTRY(Indexiv)				/* 49 */
ICD_ENTRY(Indexs)					/* 50 */
ICD_ENTRY(Indexsv)				/* 51 */
ICD_ENTRY(Normal3b)				/* 52 */
ICD_ENTRY(Normal3bv)				/* 53 */
ICD_ENTRY(Normal3d)				/* 54 */
ICD_ENTRY(Normal3dv)				/* 55 */
ICD_ENTRY(Normal3f)				/* 56 */
ICD_ENTRY(Normal3fv)				/* 57 */
ICD_ENTRY(Normal3i)				/* 58 */
ICD_ENTRY(Normal3iv)				/* 59 */
ICD_ENTRY(Normal3s)				/* 60 */
ICD_ENTRY(Normal3sv)				/* 61 */
ICD_ENTRY(RasterPos2d)			/* 62 */
ICD_ENTRY(RasterPos2dv)			/* 63 */
ICD_ENTRY(RasterPos2f)			/* 64 */
ICD_ENTRY(RasterPos2fv)			/* 65 */
ICD_ENTRY(RasterPos2i)			/* 66 */
ICD_ENTRY(RasterPos2iv)			/* 67 */
ICD_ENTRY(RasterPos2s)			/* 68 */
ICD_ENTRY(RasterPos2sv)			/* 69 */
ICD_ENTRY(RasterPos3d)			/* 70 */
ICD_ENTRY(RasterPos3dv)			/* 71 */
ICD_ENTRY(RasterPos3f)			/* 72 */
ICD_ENTRY(RasterPos3fv)			/* 73 */
ICD_ENTRY(RasterPos3i)			/* 74 */
ICD_ENTRY(RasterPos3iv)			/* 75 */
ICD_ENTRY(RasterPos3s)			/* 76 */
ICD_ENTRY(RasterPos3sv)			/* 77 */
ICD_ENTRY(RasterPos4d)			/* 78 */
ICD_ENTRY(RasterPos4dv)			/* 79 */
ICD_ENTRY(RasterPos4f)			/* 80 */
ICD_ENTRY(RasterPos4fv)			/* 81 */
ICD_ENTRY(RasterPos4i)			/* 82 */
ICD_ENTRY(RasterPos4iv)			/* 83 */
ICD_ENTRY(RasterPos4s)			/* 84 */
ICD_ENTRY(RasterPos4sv)			/* 85 */
ICD_ENTRY(Rectd)					/* 86 */
ICD_ENTRY(Rectdv)					/* 87 */
ICD_ENTRY(Rectf)					/* 88 */
ICD_ENTRY(Rectfv)					/* 89 */
ICD_ENTRY(Recti)					/* 90 */
ICD_ENTRY(Rectiv)					/* 91 */
ICD_ENTRY(Rects)					/* 92 */
ICD_ENTRY(Rectsv)					/* 93 */
ICD_ENTRY(TexCoord1d)				/* 94 */
ICD_ENTRY(TexCoord1dv)			/* 95 */
ICD_ENTRY(TexCoord1f)				/* 96 */
ICD_ENTRY(TexCoord1fv)			/* 97 */
ICD_ENTRY(TexCoord1i)				/* 98 */
ICD_ENTRY(TexCoord1iv)			/* 99 */
ICD_ENTRY(TexCoord1s)				/* 100 */
ICD_ENTRY(TexCoord1sv)			/* 101 */
ICD_ENTRY(TexCoord2d)				/* 102 */
ICD_ENTRY(TexCoord2dv)			/* 103 */
ICD_ENTRY(TexCoord2f)				/* 104 */
ICD_ENTRY(TexCoord2fv)			/* 105 */
ICD_ENTRY(TexCoord2i)				/* 106 */
ICD_ENTRY(TexCoord2iv)			/* 107 */
ICD_ENTRY(TexCoord2s)				/* 108 */
ICD_ENTRY(TexCoord2sv)			/* 109 */
ICD_ENTRY(TexCoord3d)				/* 110 */
ICD_ENTRY(TexCoord3dv)			/* 111 */
ICD_ENTRY(TexCoord3f)				/* 112 */
ICD_ENTRY(TexCoord3fv)			/* 113 */
ICD_ENTRY(TexCoord3i)				/* 114 */
ICD_ENTRY(TexCoord3iv)			/* 115 */
ICD_ENTRY(TexCoord3s)				/* 116 */
ICD_ENTRY(TexCoord3sv)			/* 117 */
ICD_ENTRY(TexCoord4d)				/* 118 */
ICD_ENTRY(TexCoord4dv)			/* 119 */
ICD_ENTRY(TexCoord4f)				/* 120 */
ICD_ENTRY(TexCoord4fv)			/* 121 */
ICD_ENTRY(TexCoord4i)				/* 122 */
ICD_ENTRY(TexCoord4iv)			/* 123 */
ICD_ENTRY(TexCoord4s)				/* 124 */
ICD_ENTRY(TexCoord4sv)			/* 125 */
ICD_ENTRY(Vertex2d)				/* 126 */
ICD_ENTRY(Vertex2dv)				/* 127 */
ICD_ENTRY(Vertex2f)				/* 128 */
ICD_ENTRY(Vertex2fv)				/* 129 */
ICD_ENTRY(Vertex2i)				/* 130 */
ICD_ENTRY(Vertex2iv)				/* 131 */
ICD_ENTRY(Vertex2s)				/* 132 */
ICD_ENTRY(Vertex2sv)				/* 133 */
ICD_ENTRY(Vertex3d)				/* 134 */
ICD_ENTRY(Vertex3dv)				/* 135 */
ICD_ENTRY(Vertex3f)				/* 136 */
ICD_ENTRY(Vertex3fv)				/* 137 */
ICD_ENTRY(Vertex3i)				/* 138 */
ICD_ENTRY(Vertex3iv)				/* 139 */
ICD_ENTRY(Vertex3s)				/* 140 */
ICD_ENTRY(Vertex3sv)				/* 141 */
ICD_ENTRY(Vertex4d)				/* 142 */
ICD_ENTRY(Vertex4dv)				/* 143 */
ICD_ENTRY(Vertex4f)				/* 144 */
ICD_ENTRY(Vertex4fv)				/* 145 */
ICD_ENTRY(Vertex4i)				/* 146 */
ICD_ENTRY(Vertex4iv)				/* 147 */
ICD_ENTRY(Vertex4s)				/* 148 */
ICD_ENTRY(Vertex4sv)				/* 149 */
ICD_ENTRY(ClipPlane)				/* 150 */
ICD_ENTRY(ColorMaterial)			/* 151 */
ICD_ENTRY(CullFace)				/* 152 */
ICD_ENTRY(Fogf)					/* 153 */
ICD_ENTRY(Fogfv)					/* 154 */
ICD_ENTRY(Fogi)					/* 155 */
ICD_ENTRY(Fogiv)					/* 156 */
ICD_ENTRY(FrontFace)				/* 157 */
ICD_ENTRY(Hint)					/* 158 */
ICD_ENTRY(Lightf)					/* 159 */
ICD_ENTRY(Lightfv)				/* 160 */
ICD_ENTRY(Lighti)					/* 161 */
ICD_ENTRY(Lightiv)				/* 162 */
ICD_ENTRY(LightModelf)			/* 163 */
ICD_ENTRY(LightModelfv)			/* 164 */
ICD_ENTRY(LightModeli)			/* 165 */
ICD_ENTRY(LightModeliv)			/* 166 */
ICD_ENTRY(LineStipple)			/* 167 */
ICD_ENTRY(LineWidth)				/* 168 */
ICD_ENTRY(Materialf)				/* 169 */
ICD_ENTRY(Materialfv)				/* 170 */
ICD_ENTRY(Materiali)				/* 171 */
ICD_ENTRY(Materialiv)				/* 172 */
ICD_ENTRY(PointSize)				/* 173 */
ICD_ENTRY(PolygonMode)			/* 174 */
ICD_ENTRY(PolygonStipple)			/* 175 */
ICD_ENTRY(Scissor)				/* 176 */
ICD_ENTRY(ShadeModel)				/* 177 */
ICD_ENTRY(TexParameterf)			/* 178 */
ICD_ENTRY(TexParameterfv)			/* 179 */
ICD_ENTRY(TexParameteri)			/* 180 */
ICD_ENTRY(TexParameteriv)			/* 181 */
ICD_ENTRY(TexImage1D)				/* 182 */
ICD_ENTRY(TexImage2D)				/* 183 */
ICD_ENTRY(TexEnvf)				/* 184 */
ICD_ENTRY(TexEnvfv)				/* 185 */
ICD_ENTRY(TexEnvi)				/* 186 */
ICD_ENTRY(TexEnviv)				/* 187 */
ICD_ENTRY(TexGend)				/* 188 */
ICD_ENTRY(TexGendv)				/* 189 */
ICD_ENTRY(TexGenf)				/* 190 */
ICD_ENTRY(TexGenfv)				/* 191 */
ICD_ENTRY(TexGeni)				/* 192 */
ICD_ENTRY(TexGeniv)				/* 193 */
ICD_ENTRY(FeedbackBuffer)			/* 194 */
ICD_ENTRY(SelectBuffer)			/* 195 */
ICD_ENTRY(RenderMode)				/* 196 */
ICD_ENTRY(InitNames)				/* 197 */
ICD_ENTRY(LoadName)				/* 198 */
ICD_ENTRY(PassThrough)			/* 199 */
ICD_ENTRY(PopName)				/* 200 */
ICD_ENTRY(PushName)				/* 201 */
ICD_ENTRY(DrawBuffer)				/* 202 */
ICD_ENTRY(Clear)					/* 203 */
ICD_ENTRY(ClearAccum)				/* 204 */
ICD_ENTRY(ClearIndex)				/* 205 */
ICD_ENTRY(ClearColor)				/* 206 */
ICD_ENTRY(ClearStencil)			/* 207 */
ICD_ENTRY(ClearDepth)				/* 208 */
ICD_ENTRY(StencilMask)			/* 209 */
ICD_ENTRY(ColorMask)				/* 210 */
ICD_ENTRY(DepthMask)				/* 211 */
ICD_ENTRY(IndexMask)				/* 212 */
ICD_ENTRY(Accum)					/* 213 */
ICD_ENTRY(Disable)				/* 214 */
ICD_ENTRY(Enable)					/* 215 */
ICD_ENTRY(Finish)					/* 216 */
ICD_ENTRY(Flush)					/* 217 */
ICD_ENTRY(PopAttrib)				/* 218 */
ICD_ENTRY(PushAttrib)				/* 219 */
ICD_ENTRY(Map1d)					/* 220 */
ICD_ENTRY(Map1f)					/* 221 */
ICD_ENTRY(Map2d)					/* 222 */
ICD_ENTRY(Map2f)					/* 223 */
ICD_ENTRY(MapGrid1d)				/* 224 */
ICD_ENTRY(MapGrid1f)				/* 225 */
ICD_ENTRY(MapGrid2d)				/* 226 */
ICD_ENTRY(MapGrid2f)				/* 227 */
ICD_ENTRY(EvalCoord1d)			/* 228 */
ICD_ENTRY(EvalCoord1dv)			/* 229 */
ICD_ENTRY(EvalCoord1f)			/* 230 */
ICD_ENTRY(EvalCoord1fv)			/* 231 */
ICD_ENTRY(EvalCoord2d)			/* 232 */
ICD_ENTRY(EvalCoord2dv)			/* 233 */
ICD_ENTRY(EvalCoord2f)			/* 234 */
ICD_ENTRY(EvalCoord2fv)			/* 235 */
ICD_ENTRY(EvalMesh1)				/* 236 */
ICD_ENTRY(EvalPoint1)				/* 237 */
ICD_ENTRY(EvalMesh2)				/* 238 */
ICD_ENTRY(EvalPoint2)				/* 239 */
ICD_ENTRY(AlphaFunc)				/* 240 */
ICD_ENTRY(BlendFunc)				/* 241 */
ICD_ENTRY(LogicOp)				/* 242 */
ICD_ENTRY(StencilFunc)			/* 243 */
ICD_ENTRY(StencilOp)				/* 244 */
ICD_ENTRY(DepthFunc)				/* 245 */
ICD_ENTRY(PixelZoom)				/* 246 */
ICD_ENTRY(PixelTransferf)			/* 247 */
ICD_ENTRY(PixelTransferi)			/* 248 */
ICD_ENTRY(PixelStoref)			/* 249 */
ICD_ENTRY(PixelStorei)			/* 250 */
ICD_ENTRY(PixelMapfv)				/* 251 */
ICD_ENTRY(PixelMapuiv)			/* 252 */
ICD_ENTRY(PixelMapusv)			/* 253 */
ICD_ENTRY(ReadBuffer)				/* 254 */
ICD_ENTRY(CopyPixels)				/* 255 */
ICD_ENTRY(ReadPixels)				/* 256 */
ICD_ENTRY(DrawPixels)				/* 257 */
ICD_ENTRY(GetBooleanv)			/* 258 */
ICD_ENTRY(GetClipPlane)			/* 259 */
ICD_ENTRY(GetDoublev)				/* 260 */
ICD_ENTRY(GetError)				/* 261 */
ICD_ENTRY(GetFloatv)				/* 262 */
ICD_ENTRY(GetIntegerv)			/* 263 */
ICD_ENTRY(GetLightfv)				/* 264 */
ICD_ENTRY(GetLightiv)				/* 265 */
ICD_ENTRY(GetMapdv)				/* 266 */
ICD_ENTRY(GetMapfv)				/* 267 */
ICD_ENTRY(GetMapiv)				/* 268 */
ICD_ENTRY(GetMaterialfv)			/* 269 */
ICD_ENTRY(GetMaterialiv)			/* 270 */
ICD_ENTRY(GetPixelMapfv)			/* 271 */
ICD_ENTRY(GetPixelMapuiv)			/* 272 */
ICD_ENTRY(GetPixelMapusv)			/* 273 */
ICD_ENTRY(GetPolygonStipple)		/* 274 */
ICD_ENTRY(GetString)				/* 275 */
ICD_ENTRY(GetTexEnvfv)			/* 276 */
ICD_ENTRY(GetTexEnviv)			/* 277 */
ICD_ENTRY(GetTexGendv)			/* 278 */
ICD_ENTRY(GetTexGenfv)			/* 279 */
ICD_ENTRY(GetTexGeniv)			/* 280 */
ICD_ENTRY(GetTexImage)			/* 281 */
ICD_ENTRY(GetTexParameterfv)		/* 282 */
ICD_ENTRY(GetTexParameteriv)		/* 283 */
ICD_ENTRY(GetTexLevelParameterfv)	/* 284 */
ICD_ENTRY(GetTexLevelParameteriv)	/* 285 */
ICD_ENTRY(IsEnabled)				/* 286 */
ICD_ENTRY(IsList)					/* 287 */
ICD_ENTRY(DepthRange)				/* 288 */
ICD_ENTRY(Frustum)				/* 289 */
ICD_ENTRY(LoadIdentity)			/* 290 */
ICD_ENTRY(LoadMatrixf)			/* 291 */
ICD_ENTRY(LoadMatrixd)			/* 292 */
ICD_ENTRY(MatrixMode)				/* 293 */
ICD_ENTRY(MultMatrixf)			/* 294 */
ICD_ENTRY(MultMatrixd)			/* 295 */
ICD_ENTRY(Ortho)					/* 296 */
ICD_ENTRY(PopMatrix)				/* 297 */
ICD_ENTRY(PushMatrix)				/* 298 */
ICD_ENTRY(Rotated)				/* 299 */
ICD_ENTRY(Rotatef)				/* 300 */
ICD_ENTRY(Scaled)					/* 301 */
ICD_ENTRY(Scalef)					/* 302 */
ICD_ENTRY(Translated)				/* 303 */
ICD_ENTRY(Translatef)				/* 304 */
ICD_ENTRY(Viewport)				/* 305 */
ICD_ENTRY(ArrayElement)			/* 306 */
ICD_ENTRY(BindTexture)			/* 307 */
ICD_ENTRY(ColorPointer)			/* 308 */
ICD_ENTRY(DisableClientState)		/* 309 */
ICD_ENTRY(DrawArrays)				/* 310 */
ICD_ENTRY(DrawElements)			/* 311 */
ICD_ENTRY(EdgeFlagPointer)		/* 312 */
ICD_ENTRY(EnableClientState)		/* 313 */
ICD_ENTRY(IndexPointer)			/* 314 */
ICD_ENTRY(Indexub)				/* 315 */
ICD_ENTRY(Indexubv)				/* 316 */
ICD_ENTRY(InterleavedArrays)		/* 317 */
ICD_ENTRY(NormalPointer)			/* 318 */
ICD_ENTRY(PolygonOffset)			/* 319 */
ICD_ENTRY(TexCoordPointer)		/* 320 */
ICD_ENTRY(VertexPointer)			/* 321 */
ICD_ENTRY(AreTexturesResident)	/* 322 */
ICD_ENTRY(CopyTexImage1D)			/* 323 */
ICD_ENTRY(CopyTexImage2D)			/* 324 */
ICD_ENTRY(CopyTexSubImage1D)		/* 325 */
ICD_ENTRY(CopyTexSubImage2D)		/* 326 */
ICD_ENTRY(DeleteTextures)			/* 327 */
ICD_ENTRY(GenTextures)			/* 328 */
ICD_ENTRY(GetPointerv)			/* 329 */
ICD_ENTRY(IsTexture)				/* 330 */
ICD_ENTRY(PrioritizeTextures)		/* 331 */
ICD_ENTRY(TexSubImage1D)			/* 332 */
ICD_ENTRY(TexSubImage2D)			/* 333 */
ICD_ENTRY(PopClientAttrib)		/* 334 */
ICD_ENTRY(PushClientAttrib)		/* 335 */