<<<<<<< HEAD
..\bin\win\tmc2 --mode 0 --geometryQP 27 --textureQP 43 --uncompressedDataPath .\longdress\longdress_vox10_%%04i.ply --compressedStreamPath longdress.bin --startFrameNumber 1051 --groupOfFramesSize 2 --frameCount 2 --videoEncoderPath "..\bin\win\TAppEncoder.exe" --colorSpaceConversionPath "..\bin\win\HDRConvert.exe" --inverseColorSpaceConversionConfig "..\bin\cfg\yuv420torgb444.cfg" --colorSpaceConversionConfig "..\bin\cfg\rgb444toyuv420.cfg" --geometryConfig "..\bin\cfg\geometry.cfg" --textureConfig "..\bin\cfg\texture.cfg"
md longdress_rec
..\bin\win\tmc2 --mode 1 --reconstructedDataPath .\longdress_rec\longdress_vox10_%%04i_rec.ply --compressedStreamPath longdress.bin --startFrameNumber 1051  --videoDecoderPath "..\bin\win\TAppDecoder"  --colorSpaceConversionPath "..\bin\win\HDRConvert"  --inverseColorSpaceConversionConfig "..\bin\cfg\yuv420torgb444.cfg" --colorSpaceConversionConfig "..\bin\cfg\rgb444toyuv420.cfg"
=======
..\bin\win\tmc2 --mode 0 --geometryQP 27 --textureQP 43 --uncompressedDataPath .\longdress\longdress_vox10_%04i.ply --compressedStreamPath longdress.bin --startFrameNumber 1051 --groupOfFramesSize 2 --frameCount 2 --videoEncoderPath "..\bin\win\TAppEncoder.exe" --colorSpaceConversionPath "..\bin\win\HDRConvert.exe" --inverseColorSpaceConversionConfig "..\bin\cfg\yuv420torgb444.cfg" --colorSpaceConversionConfig "..\bin\cfg\rgb444toyuv420.cfg" --geometryConfig "..\bin\cfg\geometry.cfg" --textureConfig "..\bin\cfg\texture.cfg"

>>>>>>> 9c9d065ac48a3907e81c18c55fcca1c6b2348b93
