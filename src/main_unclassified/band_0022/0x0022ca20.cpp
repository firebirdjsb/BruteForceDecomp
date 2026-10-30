/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0B42A547513F5CE8D03B3D43070EFC7FA314ECA7EC89BFF13FBEA464BE5ADE65
 * Entry: 0x0022ca20, Ghidra index: 7697, label: FUN_0022ca20
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Original XBE: two guest DWORDs / RET 8 and EAX result; ECX/EDX unresolved. */
extern uint32_t FUN_00160da0(uint32_t guest_word0, uint32_t guest_word1);
#include <xmmintrin.h>
/* Ghidra SSE scalar opcode model; only observed low lane is reconstructed.
 * Original ABI, upper lanes and game behavior remain UNVERIFIED. */
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469aac;
extern uint32_t DAT_0046cfdc;
extern uint32_t DAT_0046d064;
void FUN_0022ca20(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  float fVar6;
  undefined1 in_XMM0 [16];
  __m128 auVar7;
  float local_30;
  float local_2c;
  float local_28;
  
  if (((*(byte *)(param_2 + 0x58) & 2) == 0) &&
     ((iVar1 = *(int *)(param_2 + 0x44), iVar1 == 0 || (*(int *)(*(int *)(iVar1 + 0xc) + 4) != 3))))
  {
    if (*(int *)(param_2 + 0x3c) == 0) {
      uVar5 = (uint)(iVar1 == 0);
    }
    else {
      iVar1 = **(int **)(*(int *)(param_2 + 0x3c) + 0x9c);
      if (iVar1 == 1) {
        uVar5 = 0;
      }
      else if (iVar1 == 0) {
        uVar5 = 0;
      }
      else {
        if (iVar1 != 2) {
          return;
        }
        uVar5 = 1;
      }
    }
    if ((*(int *)(param_1 + 0x26c) != 0) &&
       (*(int *)(param_1 + 0x270) - *(int *)(param_1 + 0x26c) >> 2 != 0)) {
      DAT_0046cfdc = DAT_0046cfdc * 0x19660d + 0x3c6ef35f;
      if (*(int *)(param_1 + 0x26c) == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(int *)(param_1 + 0x270) - *(int *)(param_1 + 0x26c) >> 2;
      }
      if (((*(int *)(*(int *)(param_1 + 0x26c) + (DAT_0046cfdc % uVar4) * 4) != DAT_0046d064) &&
          (iVar1 = FUN_00160da0(0xffffffff,1), iVar1 != 0)) && (*(int *)(iVar1 + 4) == 0x1e)) {
        FUN_0001d0c0();
        FUN_0001fc40();
        auVar7 = _mm_rsqrt_ss(_mm_set_ss(local_30 * local_30 + local_2c * local_2c + local_28 * local_28));
        fVar6 = _mm_cvtss_f32(auVar7);
        local_30 = fVar6 * local_30;
        uVar2 = 0;
        local_2c = local_2c * fVar6;
        local_28 = local_28 * fVar6;
        if ((uVar5 == 0) && (*(int *)(param_2 + 0x44) != 0)) {
          uVar2 = FUN_0015b420();
        }
        uVar3 = FUN_0022c4a0(param_1);
        FUN_00213e60(*(undefined4 *)(DAT_00469aac + 0x200),param_2 + 4,param_2 + 0x10,&local_30,
                     iVar1,0x3f800000,0x3f800000,uVar3,uVar2,uVar5,param_3);
      }
    }
  }
  return;
}
