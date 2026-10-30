/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0556EF64586748BAB5C2485EBB701AA9AB732DAC67764A4725E1960E7BD166E3
 * Entry: 0x0034031b, Ghidra index: 12666, label: FUN_0034031b
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_0034031b(int param_1,undefined4 param_2,uint param_3,undefined4 *param_4,uint param_5,
                undefined4 param_6,int param_7)

{
  int iVar1;
  uint uVar2;
  short *psVar3;
  undefined4 *puVar4;
  byte *pbVar5;
  bool bVar6;
  short local_1c [4];
  int local_14;
  byte *local_c;
  int *local_8;
  /* XBE: EAX=0x7d0 at call 0x002ebea0 (stack probe); EDI=ESP,
   * ECX=0x1f4, REP STOSD. This local mirrors the 2000 guest scratch
   * bytes, NOT the guest ESP address or an established host-call ABI.
   * Original RET 0x1c cleanup; register/caller contracts remain ABI_UNVERIFIED. */
  undefined4 guest_stack_words[500];

  
  uVar2 = 0;
  local_8 = (int *)0x0;
  local_c = (byte *)0x0;
  FUN_002ebea0();
  puVar4 = guest_stack_words;
  for (iVar1 = 500; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  iVar1 = FUN_0033fbee();
  if (iVar1 == 0) {
    if ((*local_8 == 5) && (local_8[1] == 0xf)) {
      local_14 = param_1 + 0x2b8;
      local_1c[0] = 0x17;
      local_1c[1] = 0;
      local_1c[2] = 0x10;
      local_1c[3] = 0;
      iVar1 = FUN_0033fc56();
      if (iVar1 != 0) {
        return ((iVar1 != 0x3c) - 1 & 0x2d) + 0xc000006d;
      }
      iVar1 = FUN_0033fbee();
      if (iVar1 != 0) goto LAB_003403fe;
      if (param_3 != 0) {
        do {
          FUN_0033f26e();
          if (param_7 == *(int *)(local_c + 0x10)) {
            iVar1 = 7;
            bVar6 = true;
            psVar3 = local_1c;
            pbVar5 = local_c;
            do {
              pbVar5 = pbVar5 + 2;
              if (iVar1 == 0) break;
              iVar1 = iVar1 + -1;
              bVar6 = *psVar3 == *(short *)pbVar5;
              psVar3 = psVar3 + 1;
            } while (bVar6);
            if (bVar6) break;
          }
          uVar2 = uVar2 + 1;
        } while (uVar2 < param_3);
      }
      if ((((uVar2 != param_3) && ((*local_c & 0x80) != 0)) && (*(int *)(local_c + 0x14) == -0x83))
         && (*(uint *)(local_c + 0x18) == param_5)) {
        puVar4 = *(undefined4 **)(local_c + 0x1c);
        for (uVar2 = param_5 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
          *param_4 = *puVar4;
          puVar4 = puVar4 + 1;
          param_4 = param_4 + 1;
        }
        for (param_5 = param_5 & 3; param_5 != 0; param_5 = param_5 - 1) {
          *(undefined1 *)param_4 = *(undefined1 *)puVar4;
          puVar4 = (undefined4 *)((int)puVar4 + 1);
          param_4 = (undefined4 *)((int)param_4 + 1);
        }
        return 0;
      }
    }
    iVar1 = -0x3fffff93;
  }
  else {
LAB_003403fe:
    iVar1 = -0x3fffff66;
  }
  return iVar1;
}
