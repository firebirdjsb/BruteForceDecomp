/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 612192EE285F08D69BDF551EC1FA46BE078BB55C306FA712780327AEAF78ADAB
 * Entry: 0x0021c220, Ghidra index: 7524, label: FUN_0021c220
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include <xmmintrin.h>
/* Ghidra SSE scalar opcode model; only observed low lane is reconstructed.
 * Original ABI, upper lanes and game behavior remain UNVERIFIED. */
void FUN_0021c220(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  float *pfVar4;
  undefined1 in_XMM0 [16];
  __m128 auVar5;
  float local_8;
  
  puVar3 = *(undefined4 **)(param_1 + 0xe4);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)FUN_002ea01d(0xc);
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      uVar1 = param_2[2];
      uVar2 = param_2[1];
      *puVar3 = *param_2;
      puVar3[1] = uVar2;
      puVar3[2] = uVar1;
    }
    *(undefined4 **)(param_1 + 0xe4) = puVar3;
    pfVar4 = *(float **)(param_1 + 0xe4);
    auVar5 = _mm_rsqrt_ss(_mm_set_ss(pfVar4[2] * pfVar4[2] + pfVar4[1] * pfVar4[1] + *pfVar4 * *pfVar4));
    local_8 = _mm_cvtss_f32(auVar5);
  }
  else {
    uVar1 = param_2[2];
    uVar2 = param_2[1];
    *puVar3 = *param_2;
    puVar3[1] = uVar2;
    puVar3[2] = uVar1;
    pfVar4 = *(float **)(param_1 + 0xe4);
    auVar5 = _mm_rsqrt_ss(_mm_set_ss(pfVar4[2] * pfVar4[2] + pfVar4[1] * pfVar4[1] + *pfVar4 * *pfVar4));
    local_8 = _mm_cvtss_f32(auVar5);
  }
  *pfVar4 = local_8 * *pfVar4;
  pfVar4[1] = local_8 * pfVar4[1];
  pfVar4[2] = local_8 * pfVar4[2];
  return;
}
