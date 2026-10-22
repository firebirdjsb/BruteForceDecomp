/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6BC07DDACB62B2C9311096D8AB1720E7D0BBFC350DF2347F18762F59783489E6
 * Entry: 0x00251800, Ghidra index: 8370, label: FUN_00251800
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_s_buffer_error_003bb194;
extern uint32_t PTR_s_stream_error_003bb188;
extern uint32_t UNK_0038d7d0;
uint FUN_00251800(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int *unaff_EBX;
  undefined4 *puVar5;
  
  if ((((unaff_EBX == (int *)0x0) ||
       (puVar1 = (undefined4 *)unaff_EBX[7], puVar1 == (undefined4 *)0x0)) || (4 < param_1)) ||
     (param_1 < 0)) {
    return 0xfffffffe;
  }
  if (((unaff_EBX[3] == 0) || ((*unaff_EBX == 0 && (unaff_EBX[1] != 0)))) ||
     ((puVar1[1] == 0x29a && (param_1 != 4)))) {
    unaff_EBX[6] = (int)PTR_s_stream_error_003bb188;
    return 0xfffffffe;
  }
  if (unaff_EBX[4] == 0) {
LAB_00251941:
    unaff_EBX[6] = (int)PTR_s_buffer_error_003bb194;
    return 0xfffffffb;
  }
  iVar2 = puVar1[8];
  *puVar1 = unaff_EBX;
  puVar1[8] = param_1;
  if (puVar1[1] == 0x2a) {
    puVar1[1] = 0x71;
    FUN_00251760();
    if (puVar1[0x19] != 0) {
      FUN_00251760();
      FUN_00251760();
    }
    unaff_EBX[0xc] = 1;
  }
  if (puVar1[5] == 0) {
    if (((unaff_EBX[1] == 0) && (param_1 <= iVar2)) && (param_1 != 4)) {
      unaff_EBX[6] = (int)PTR_s_buffer_error_003bb194;
      return 0xfffffffb;
    }
  }
  else {
    FUN_00251790();
    if (unaff_EBX[4] == 0) {
      puVar1[8] = 0xffffffff;
      return 0;
    }
  }
  if (puVar1[1] == 0x29a) {
    if (unaff_EBX[1] != 0) goto LAB_00251941;
LAB_00251957:
    if ((puVar1[0x1b] == 0) && ((param_1 == 0 || (puVar1[1] == 0x29a)))) goto LAB_002519ff;
  }
  else if (unaff_EBX[1] == 0) goto LAB_00251957;
  iVar2 = (**(code **)(&UNK_0038d7d0 + puVar1[0x1f] * 0xc))(puVar1,param_1);
  if ((iVar2 == 2) || (iVar2 == 3)) {
    puVar1[1] = 0x29a;
  }
  if ((iVar2 != 0) && (iVar2 != 2)) {
    if (iVar2 == 1) {
      if (param_1 == 1) {
        FUN_0027dc80();
      }
      else {
        FUN_0027dbe0(0,0);
        if (param_1 == 3) {
          *(undefined2 *)(puVar1[0xf] + -2 + puVar1[0x11] * 2) = 0;
          uVar4 = puVar1[0x11] * 2 - 2;
          puVar5 = (undefined4 *)puVar1[0xf];
          for (uVar3 = uVar4 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
            *puVar5 = 0;
            puVar5 = puVar5 + 1;
          }
          for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
            *(undefined1 *)puVar5 = 0;
            puVar5 = (undefined4 *)((int)puVar5 + 1);
          }
        }
      }
      FUN_00251790();
      if (unaff_EBX[4] == 0) goto LAB_00251a52;
    }
LAB_002519ff:
    if (param_1 != 4) {
      return 0;
    }
    if (puVar1[6] == 0) {
      FUN_00251760();
      FUN_00251760();
      FUN_00251790();
      puVar1[6] = 0xffffffff;
      return (uint)(puVar1[5] == 0);
    }
    return 1;
  }
  if (unaff_EBX[4] != 0) {
    return 0;
  }
LAB_00251a52:
  puVar1[8] = 0xffffffff;
  return 0;
}
