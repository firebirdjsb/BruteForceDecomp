/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 487AB2C7D46465E26DD92B4606E7086201C72708D00F6698B3364616A6F60BE2
 * Entry: 0x00255330, Ghidra index: 8421, label: FUN_00255330
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t _DAT_00000000;
extern char s_23_23_ISchema_00406e3c[];
/* WARNING: Removing unreachable block (ram,0x002557c8) */
/* WARNING: Removing unreachable block (ram,0x00255616) */
/* WARNING: Removing unreachable block (ram,0x002554f9) */
/* WARNING: Removing unreachable block (ram,0x00255482) */
/* WARNING: Removing unreachable block (ram,0x00255427) */
/* WARNING: Removing unreachable block (ram,0x00255511) */
/* WARNING: Removing unreachable block (ram,0x00255528) */
/* WARNING: Removing unreachable block (ram,0x00255530) */
/* WARNING: Removing unreachable block (ram,0x00255546) */
/* WARNING: Removing unreachable block (ram,0x0025556b) */
/* WARNING: Removing unreachable block (ram,0x00255433) */
/* WARNING: Removing unreachable block (ram,0x0025543f) */
/* WARNING: Removing unreachable block (ram,0x00255476) */
/* WARNING: Removing unreachable block (ram,0x0025548c) */
/* WARNING: Removing unreachable block (ram,0x002554a4) */
/* WARNING: Removing unreachable block (ram,0x002554ab) */
/* WARNING: Removing unreachable block (ram,0x002554c7) */
/* WARNING: Removing unreachable block (ram,0x002554df) */
/* WARNING: Removing unreachable block (ram,0x002554e6) */
/* WARNING: Removing unreachable block (ram,0x002554f1) */
/* WARNING: Removing unreachable block (ram,0x00255503) */
/* WARNING: Removing unreachable block (ram,0x0025575f) */
/* WARNING: Removing unreachable block (ram,0x00255767) */
/* WARNING: Removing unreachable block (ram,0x00255771) */
/* WARNING: Removing unreachable block (ram,0x00255779) */
/* WARNING: Removing unreachable block (ram,0x00255705) */
/* WARNING: Removing unreachable block (ram,0x00255714) */
/* WARNING: Removing unreachable block (ram,0x002556f5) */
/* WARNING: Removing unreachable block (ram,0x002556fd) */
/* WARNING: Removing unreachable block (ram,0x00255716) */
/* WARNING: Removing unreachable block (ram,0x0025571d) */
/* WARNING: Removing unreachable block (ram,0x002556ed) */
/* WARNING: Removing unreachable block (ram,0x00255637) */
/* WARNING: Removing unreachable block (ram,0x00255670) */
/* WARNING: Removing unreachable block (ram,0x0025567c) */
/* WARNING: Removing unreachable block (ram,0x00255686) */
/* WARNING: Removing unreachable block (ram,0x0025569e) */
/* WARNING: Removing unreachable block (ram,0x002556a5) */
/* WARNING: Removing unreachable block (ram,0x002556c1) */
/* WARNING: Removing unreachable block (ram,0x002556c8) */
/* WARNING: Removing unreachable block (ram,0x002556d3) */
/* WARNING: Removing unreachable block (ram,0x002556db) */
/* WARNING: Removing unreachable block (ram,0x002556e5) */
/* WARNING: Removing unreachable block (ram,0x002555b5) */
/* WARNING: Removing unreachable block (ram,0x002557b6) */
/* WARNING: Removing unreachable block (ram,0x00255733) */
/* WARNING: Removing unreachable block (ram,0x0025573b) */
/* WARNING: Removing unreachable block (ram,0x00255745) */
/* WARNING: Removing unreachable block (ram,0x0025574d) */
/* WARNING: Removing unreachable block (ram,0x00255753) */
/* WARNING: Removing unreachable block (ram,0x00255389) */
/* WARNING: Removing unreachable block (ram,0x00255393) */
/* WARNING: Removing unreachable block (ram,0x0025539d) */
/* WARNING: Removing unreachable block (ram,0x002553d7) */
/* WARNING: Removing unreachable block (ram,0x0025562c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00255330(int *param_1)

{
  int *piVar1;
  int iVar2;
  int in_ECX;
  int *unaff_EBX;
  int *unaff_EBP;
  int *unaff_EDI;
  int local_c [2];
  int *piStack_4;
  
  (**(code **)(*param_1 + 0x14))(param_1);
  if (unaff_EBP != (int *)0x0) {
    (**(code **)(*unaff_EBP + 8))(unaff_EBP);
  }
  FUN_00254ed0(in_ECX);
  if (unaff_EBX != piStack_4) {
    if (unaff_EBX != (int *)0x0) {
      (**(code **)(*unaff_EBX + 8))(unaff_EBX);
    }
    (**(code **)(*piStack_4 + 4))(piStack_4);
    unaff_EBX = piStack_4;
  }
  (**(code **)(*piStack_4 + 0x10))(piStack_4,&stack0xffffffd8);
  do {
    FUN_00281d30(2);
    iVar2 = FUN_00254f60(local_c,unaff_EDI,**(undefined4 **)(in_ECX + 0x24),unaff_EBX,
                         &stack0xffffffd8);
    if ((iVar2 < 0) ||
       (iVar2 = (**(code **)(_DAT_00000000 + 0x10))(0,s_23_23_ISchema_00406e3c,&stack0xffffffd4),
       iVar2 < 0)) break;
    piVar1 = *(int **)(in_ECX + 8);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x2c))(piVar1,0,*(undefined4 *)(in_ECX + 0x2884));
      *(undefined4 *)(in_ECX + 0x2884) = 1;
    }
    iVar2 = FUN_00255330(0);
  } while (-1 < iVar2);
  if (local_c != (int *)0x0) {
    (**(code **)(local_c[0] + 8))(local_c);
  }
  if (unaff_EDI != (int *)0x0) {
    (**(code **)(*unaff_EDI + 8))(unaff_EDI);
  }
  return 0x80004005;
}
