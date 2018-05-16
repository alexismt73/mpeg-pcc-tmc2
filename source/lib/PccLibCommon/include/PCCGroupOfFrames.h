/* The copyright in this software is being made available under the BSD
 * License, included below. This software may be subject to other third party
 * and contributor rights, including patent rights, and no such rights are
 * granted under this license.
 *
 * Copyright (c) 2010-2017, ISO/IEC
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 *  * Redistributions of source code must retain the above copyright notice,
 *    this list of conditions and the following disclaimer.
 *  * Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions and the following disclaimer in the documentation
 *    and/or other materials provided with the distribution.
 *  * Neither the name of the ISO/IEC nor the names of its contributors may
 *    be used to endorse or promote products derived from this software without
 *    specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS
 * BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF
 * THE POSSIBILITY OF SUCH DAMAGE.
 */

#ifndef PCCGroupOfFrames_h
#define PCCGroupOfFrames_h

#include "PCCCommon.h"

namespace pcc {
class PCCPointSet3; 

class PCCGroupOfFrames {
 public:
   PCCGroupOfFrames();
  ~PCCGroupOfFrames();

  void clear() { frames_.clear(); }
  size_t size() const { return frames_.size(); }
  void resize( size_t n ) { frames_.resize( n ); }
  const PCCPointSet3& operator[](const size_t index) const {
    assert(index < frames_.size());
    return frames_[index];
  }
  PCCPointSet3& operator[](const size_t index) {
    assert(index < frames_.size());
    return frames_[index];
  } 
  std::vector<PCCPointSet3>& getFrames() { return frames_; }

  bool load( const std::string uncompressedDataPath, const size_t startFrameNumber, 
             const size_t endFrameNumber, const ColorTransform colorTransform );

  bool write( const std::string reconstructedDataPath, size_t& frameNumber );

 private:
  std::vector<PCCPointSet3> frames_;
};
}

#endif /* PCCGroupOfFrames_h */
