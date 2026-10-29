/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9634200AABE2CC9A1D2B0C379F36FFA1A570EC8721F0EDABDAEA4DA596CF2503
 * Entry: 0x002ebfe0, Ghidra index: 10652, label: FUN_002ebfe0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0040f4f0;
undefined4 FUN_002ebfe0(int param_1,uint param_2,int param_3,uint param_4)

{
  uint in_EAX;
  uint uVar1;
  undefined4 uVar2;
  byte extraout_CL;
  char extraout_CL_00;
  uint extraout_ECX;
  int extraout_ECX_00;
  int iVar3;
  int extraout_ECX_01;
  bool bVar4;
  short in_FPUControlWord;
  float10 extraout_ST0;
  float10 fVar5;
  float10 extraout_ST1;
  float10 extraout_ST1_00;
  float10 extraout_ST1_01;
  float10 fVar6;
  undefined1 local_78 [20];
  /* Original CH tests the high byte of the incoming DWORD. Synthetic
   * return-address writes and 80-bit array storage have no matching
   * original memory stores here. FPU frame/helper ABI remains unverified. */
  short local_4;
  undefined2 uStack_2;
  
  /* Original XBE 0x002EBFE0..0x002EBFED: PUSH EAX saves a
   * guest DWORD; WAIT/FSTCW WORD PTR [ESP] overwrites just the
   * low 16 bits with the x87 control word. The upper 16 bits
   * remain EAX[31:16]. Ghidra's synthetic _local_4 joined the
   * adjacent local_4/uStack_2 halves into one undeclared symbol.
   * Keep both original 16-bit writes explicit without fabricating
   * a host pointer. x87 rounding/stack ABI remains ABI_UNVERIFIED. */
  local_4 = in_FPUControlWord;
  uStack_2 = (undefined2)(in_EAX >> 16);
  uVar1 = in_EAX;
  if (in_FPUControlWord != 0x27f) {
    in_EAX = FUN_002f060d();
    uVar1 = extraout_ECX;
  }
  bVar4 = (uVar1 & 0x7ff00000) == 0x7ff00000;
  if (bVar4) {
    if ((in_EAX & 0xfffff) == 0 && param_3 == 0) {
      fVar5 = (float10)__fload_withFB();
      iVar3 = extraout_ECX_01;
      fVar6 = extraout_ST1_01;
      goto LAB_002ec0bd;
    }
    fVar5 = (float10)__fload_withFB();
    if ((param_4 & 0x80000) == 0) {
      iVar3 = extraout_ECX_00 + 1;
      fVar6 = extraout_ST1_00;
      goto LAB_002ec0bd;
    }
LAB_002ec08a:
    uVar2 = 1;
  }
  else {
    uVar1 = __fload_withFB();
    if (!bVar4) {
      if (((uVar1 & 0x7ff00000) != 0) || ((param_2 & 0xfffff) != 0 || param_1 != 0)) {
        fVar5 = extraout_ST0;
        if ((param_2 & 0x80000000) != 0) {
          fVar5 = (float10)FUN_002ec1a5();
          fVar5 = -fVar5;
          if (extraout_CL_00 == '\0') {
            uVar2 = 1;
            goto LAB_002ec058;
          }
        }
        log2(fVar5);
        uVar2 = FUN_002f05f8();
        if (DAT_0040f4f0 != 0) {
          return uVar2;
        }
        uVar2 = FUN_002f06e1();
        return uVar2;
      }
      if ((param_4 & 0x7fffffff) == 0 && param_3 == 0) {
        uVar2 = FUN_002f0696();
        return uVar2;
      }
      uVar2 = FUN_002ec1a5();
      if ((param_4 & 0x80000000) == 0) {
        if (((uint8_t)(param_2 >> 24) >> 7 & extraout_CL) == 0) {
          return uVar2;
        }
        uVar2 = FUN_002f0696();
        return uVar2;
      }
      uVar2 = 2;
      goto LAB_002ec058;
    }
    iVar3 = 0;
    fVar5 = extraout_ST0;
    fVar6 = extraout_ST1;
LAB_002ec0bd:
    if (((param_2 & 0x7ff00000) == 0x7ff00000) && ((param_2 & 0xfffff) != 0 || param_1 != 0)) {
      if ((param_2 & 0x80000) != 0) goto LAB_002ec08a;
    }
    else if (iVar3 == 0) {
      iVar3 = FUN_002f07e5((double)fVar5,(double)fVar6,local_78);
      if (iVar3 == 0) {
        return 0;
      }
      uVar2 = 1;
      goto LAB_002ec058;
    }
    uVar2 = 7;
  }
LAB_002ec058:
  if (DAT_0040f4f0 != 0) {
    return uVar2;
  }
  uVar2 = FUN_002f05a4();
  return uVar2;
}
