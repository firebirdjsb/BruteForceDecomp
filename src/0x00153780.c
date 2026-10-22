/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F79EB1CE282BE298215F079623DEEDDF20AF7C7735B960439FFDE14C74ECAA4D
 * Entry: 0x00153780, Ghidra index: 4427, label: FUN_00153780
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004699bc;
void FUN_00153780(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 float param_5)

{
  float fVar1;
  undefined4 uVar2;
  int in_EAX;
  undefined4 *in_ECX;
  
  *(undefined4 *)(in_EAX + 8) = param_4;
  *(float *)(in_EAX + 0xc) = param_5;
  *(float *)(in_EAX + 0x10) = param_5 * 0.5;
  uVar2 = in_ECX[2];
  fVar1 = (float)in_ECX[1];
  *(undefined4 *)(in_EAX + 0x18) = *in_ECX;
  *(float *)(in_EAX + 0x1c) = param_5 * 0.5 + fVar1;
  *(undefined4 *)(in_EAX + 0x20) = uVar2;
  *(undefined4 *)(in_EAX + 0x24) = *(undefined4 *)(in_EAX + 0x18);
  *(undefined4 *)(in_EAX + 0x28) = *(undefined4 *)(in_EAX + 0x1c);
  *(undefined4 *)(in_EAX + 0x2c) = uVar2;
  DAT_004699bc = 0;
  FUN_001525f0(in_EAX,param_1,param_3);
  return;
}
