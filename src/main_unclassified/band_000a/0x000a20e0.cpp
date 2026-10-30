/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 619C3CE3C0BEB8EBEB2447CA5D026029A68F75BF547532F46D9106BAA65B05FD
 * Entry: 0x000a20e0, Ghidra index: 1920, label: FUN_000a20e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern void FUN_0001fed0(undefined4 *param_1,uint param_2);
extern void FUN_001e8830(int param_1);
extern void FUN_00135410(uint *param_1);

extern uint32_t DAT_00400534;
extern uint32_t DAT_0040d7d0;
extern uint32_t *DAT_00443308;
/* WARNING: Removing unreachable block (ram,0x000a223f) */

uint FUN_000a20e0(int param_1)

{
  char *pcVar1;
  char cVar2;
  char *in_EAX;
  char *pcVar3;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  int *unaff_ESI;
  int *piVar8;
  int *piVar9;
  int *piStack_164;
  /* XBE 0x000A21D0: LEA EDX,[ESP+0x18] after the vtable +0x40
   * call. This is a distinct 32-bit interface-output slot from
   * piStack_164 at [ESP+0x14]. The vtable+0x00 call writes it,
   * and 0x000A21F1 reloads it for the subsequent interface flow.
   * Guest-to-host pointer translation and COM ABI remain unverified. */
  int *interface_output;
  /* XBE 0x000A220B: LEA ECX,[ESP+0x24] supplies a third, distinct
   * guest DWORD slot to FUN_00135410 at 0x000A2222. This is NOT
   * the interface slot at ESP+0x18 or the enumeration slot at +0x14.
   * EBX and EDI carry additional implicit x86 register arguments;
   * this draft has not reconstructed those register contracts. */
  undefined4 helper_output_word;
  uint auStack_150 [8];
  int *local_130;
  undefined4 local_120;
  uint local_11c;
  int local_110 [67];
  
  pcVar1 = (char *)(param_1 + 4);
  auStack_150[0] = (uint)(uint3)auStack_150[0];
  iVar6 = (int)pcVar1 - (int)in_EAX;
  do {
    cVar2 = *in_EAX;
    in_EAX[iVar6] = cVar2;
    in_EAX = in_EAX + 1;
  } while (cVar2 != '\0');
  local_11c = 0xf;
  local_120 = 0;
  local_130 = (int *)((uint)local_130 & 0xffffff00);
  pcVar3 = pcVar1;
  do {
    cVar2 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar2 != '\0');
  piStack_164 = (int *)(pcVar3 + -(param_1 + 5));
  FUN_0001fed0(pcVar1);
  piStack_164 = (int *)&DAT_00400534;
  FUN_001e8830();
  if (0xf < local_11c) {
    piStack_164 = local_130;
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  piVar8 = (int *)(param_1 + 0x114);
  piVar9 = local_110;
  piStack_164 = piVar8;
  iVar6 = (**(code **)(*DAT_00443308 + 0x10))(DAT_00443308);
  if (iVar6 < 0) {
    uVar5 = (uint)unaff_ESI >> 0x18;
  }
  else {
    auStack_150[0] = 0;
    (**(code **)(*DAT_00443308 + 0x3c))(DAT_00443308,*piVar8,auStack_150);
    piVar7 = (int *)0x0;
    if (unaff_ESI != (int *)0x0) {
      do {
        piStack_164 = (int *)0x0;
        iVar6 = (**(code **)(*DAT_00443308 + 0x40))(DAT_00443308,*piVar8,piVar7,&piStack_164);
        if ((-1 < iVar6) &&
           (iVar6 = (**(code **)*piStack_164)(piStack_164,&DAT_0040d7d0,&interface_output),
           -1 < iVar6)) {
          (**(code **)(*piStack_164 + 0x14))(piStack_164);
          piVar7 = (int *)0x0;
          if (piStack_164 != (int *)0x0) {
            piVar7 = piStack_164 + -1;
          }
          puVar4 = (undefined4 *)(**(code **)(*piVar9 + 0x2c))(piVar9);
          unaff_ESI = (int *)*puVar4;
          FUN_00135410(&helper_output_word);
          (**(code **)(*piVar9 + 4))(piVar9);
        }
        if (piStack_164 != (int *)0x0) {
          (**(code **)(*piStack_164 + 8))(piStack_164);
        }
        piVar7 = (int *)((int)piVar7 + 1);
      } while (piVar7 < unaff_ESI);
    }
    uVar5 = 1;
  }
  *(byte *)(param_1 + 0x118) = *(byte *)(param_1 + 0x118) & 0xfe;
  return uVar5;
}
