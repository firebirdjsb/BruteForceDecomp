/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F317B07D33D08EE60EB49A60CA66C7119F6AAC471B77AA74772B8BAF21624863
 * Entry: 0x000ba040, Ghidra index: 2248, label: FUN_000ba040
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern undefined4 FUN_000b9f60(int param_1);
extern void FUN_000bcd10(void);
extern void FUN_0008f6a0(std::uint32_t guest_esi, std::uint32_t guest_word_0);
extern undefined4 FUN_000ba140(void);

undefined4 FUN_000ba040(int param_1)

{
  char cVar1;
  int in_EAX;
  int *piVar2;
  undefined4 *puVar3;
  int unaff_EBX;
  
  if (*(undefined4 **)(in_EAX + 0x1348) == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = (undefined4 *)**(undefined4 **)(in_EAX + 0x1348);
  }
  do {
    if (puVar3 == *(undefined4 **)(in_EAX + 0x1348)) {
LAB_000ba07f:
      piVar2 = (int *)FUN_000b9f60(in_EAX);
      if (piVar2 == (int *)0x0) {
        return 0;
      }
      FUN_000bcd10();
      if (piVar2[4] != param_1) {
        FUN_0008f6a0(param_1);
      }
      (**(code **)(*piVar2 + 0x14))();
      (**(code **)(*piVar2 + 0x1c))(0x3f800000);
      return 1;
    }
    if (*(int *)(puVar3[2] + 0xe0) == unaff_EBX) {
      cVar1 = FUN_000ba140();
      if (cVar1 == '\0') {
        return 0;
      }
      goto LAB_000ba07f;
    }
    puVar3 = (undefined4 *)*puVar3;
  } while( true );
}
