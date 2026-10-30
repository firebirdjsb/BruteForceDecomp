/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: AF30544778515E1B4735FE453275B9B0D8255EBA20FE8970049F9CF5B8E3EC06
 * Entry: 0x00077fb0, Ghidra index: 1419, label: FUN_00077fb0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00400128;
extern uint32_t DAT_0040ddd8;
extern uint32_t *DAT_004432f8;
extern uint32_t *DAT_0046990c;
extern char s_23_23_ISchema_00406e3c[];
extern char s_boolean_gameflag_0040ddfc[];
extern char s_float_gameflag_0040ddec[];
extern char s_int_gameflag_0040dddc[];
uint FUN_00077fb0(undefined4 *param_1)

{
  char cVar1;
  char *in_EAX;
  char *pcVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  char *in_ECX;
  char *pcVar6;
  uint uVar7;
  uint uVar8;
  int *unaff_EBP;
  uint unaff_ESI;
  undefined4 *puVar9;
  int *unaff_EDI;
  undefined4 *puVar10;
  undefined *puVar11;
  int *local_234 [5];
  undefined4 local_220;
  undefined1 auStack_214 [8];
  undefined1 local_20c [4];
  char local_208 [260];
  undefined1 local_104 [256];
  undefined4 uStack_4;
  
  if (in_EAX == (char *)0x0) {
    return 0;
  }
  local_234[0] = (int *)0x0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  if (in_ECX == (char *)0x0) {
    puVar11 = &DAT_00400128;
    FUN_0001fe90(in_EAX);
    FUN_001e8830(puVar11);
    if (0xf < (uint)local_20c) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0(local_220);
    }
    /* XBE 0x000780B3 PUSH 0x104; 0x780B8/0x780BD pass
     * S-0x208 and S-0x104 respectively. The 0x104 was a
     * fourth buffer-length argument, NOT an interface pointer. */
    cVar1 = (**(code **)(*DAT_004432f8 + 0x28))
        (DAT_004432f8,local_104,local_208,0x104);
    if (cVar1 == '\x01') {
      if (unaff_EBP != (int *)0x0) {
        (**(code **)(*unaff_EBP + 8))(unaff_EBP);
        unaff_EBP = (int *)0x0;
      }
      /* XBE 0x000780EA LEA [ESP+0x10] = S-0x234,
       * distinct from pathname S-0x208. */
      (**(code **)(*DAT_0046990c + 0xc))
          (DAT_0046990c,local_208,local_234);
    }
  }
  else {
    iVar3 = -(int)in_ECX;
    do {
      cVar1 = *in_ECX;
      in_ECX[(int)(local_208 + iVar3)] = cVar1;
      in_ECX = in_ECX + 1;
    } while (cVar1 != '\0');
    pcVar2 = &DAT_0040ddd8;
    do {
      pcVar6 = pcVar2;
      pcVar2 = pcVar6 + 1;
    } while (*pcVar6 != '\0');
    puVar10 = (undefined4 *)(local_20c + 3);
    do {
      pcVar2 = (char *)((int)puVar10 + 1);
      puVar10 = (undefined4 *)((int)puVar10 + 1);
    } while (*pcVar2 != '\0');
    puVar9 = (undefined4 *)&DAT_0040ddd8;
    for (uVar7 = (uint)(pcVar6 + -0x40ddd7) >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar10 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar10 = puVar10 + 1;
    }
    for (uVar7 = (uint)(pcVar6 + -0x40ddd7) & 3; pcVar2 = in_EAX, uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined1 *)puVar10 = *(undefined1 *)puVar9;
      puVar9 = (undefined4 *)((int)puVar9 + 1);
      puVar10 = (undefined4 *)((int)puVar10 + 1);
    }
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    uVar7 = (int)pcVar2 - (int)in_EAX;
    pcVar2 = local_20c + 3;
    do {
      pcVar6 = pcVar2 + 1;
      pcVar2 = pcVar2 + 1;
    } while (*pcVar6 != '\0');
    for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)in_EAX;
      in_EAX = in_EAX + 4;
      pcVar2 = pcVar2 + 4;
    }
    for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *pcVar2 = *in_EAX;
      in_EAX = in_EAX + 1;
      pcVar2 = pcVar2 + 1;
    }
    (**(code **)(*DAT_0046990c + 0xc))(DAT_0046990c,local_208,local_234);
  }
  /* Original 0x000780FA reloads the opened interface from
   * [ESP+0x10] = S-0x234, i.e. local_234[0].
   * Guest COM pointers need native memory translation before use. */
  unaff_EBP = local_234[0];
  if (unaff_EBP != (int *)0x0) {
    local_234[0] = (int *)0x0;
    iVar3 = (**(code **)(*unaff_EBP + 0x28))(unaff_EBP,local_234);
    if (-1 < iVar3) {
      puVar10 = (undefined4 *)(**(code **)(*local_234[0] + 0x2c))(local_234[0],0xffffffff);
      param_1[10] = *puVar10;
      piVar4 = (int *)FUN_00077f20(param_1,uStack_4);
      if (piVar4 != (int *)0x0) {
        (**(code **)(*piVar4 + 4))(piVar4);
        /* XBE 0x00078152 zeroes S-0x230; 0x0007815A passes
         * its address as QueryInterface output. On success
         * 0x0007816C reads it to [EBP+0x0C]. */
        local_234[1] = (int *)0x0;
        iVar3 = (**(code **)(*piVar4 + 0x10))
            (piVar4,s_23_23_ISchema_00406e3c,&local_234[1]);
        unaff_EDI = local_234[1];
        if (-1 < iVar3) {
          param_1[3] = unaff_EDI;
        }
        uVar5 = FUN_00077f20(param_1,s_boolean_gameflag_0040ddfc);
        *param_1 = uVar5;
        uVar5 = FUN_00077f20(param_1,s_float_gameflag_0040ddec);
        param_1[2] = uVar5;
        uVar5 = FUN_00077f20(param_1,s_int_gameflag_0040dddc);
        param_1[1] = uVar5;
        if (unaff_EDI != (int *)0x0) {
          (**(code **)(*unaff_EDI + 8))(unaff_EDI);
        }
        (**(code **)(*piVar4 + 8))(piVar4);
      }
    }
    if (local_234[0] != (int *)0x0) {
      (**(code **)(*local_234[0] + 8))(local_234[0]);
    }
    if (unaff_EBP != (int *)0x0) {
      (**(code **)(*unaff_EBP + 8))(unaff_EBP);
    }
  }
  return unaff_ESI >> 0x18;
}
