#define BOOST_TEST_MODULE TestArchitecture
#include <boost/test/unit_test.hpp> 

#include <medusa/binary_stream.hpp>
#include <medusa/module.hpp>
#include <medusa/architecture.hpp>
#include <medusa/instruction.hpp>

BOOST_AUTO_TEST_SUITE(architecture_test_suite)

BOOST_AUTO_TEST_CASE(arch_arm_test_case)
{
  BOOST_MESSAGE("Testing ARM architecture");

  auto& rModMgr = medusa::ModuleManager::Instance();
  auto pArmGetter = rModMgr.LoadModule<medusa::TGetArchitecture>(".", "arm");
  BOOST_CHECK(pArmGetter != nullptr);
  auto pArmDisasm = pArmGetter();

  auto const ArmMode = pArmDisasm->GetModeByName("arm");
  auto const ThumbMode = pArmDisasm->GetModeByName("thumb");
  BOOST_CHECK(ArmMode != 0);
  BOOST_CHECK(ThumbMode != 0);

  {
    // e52de004        push    {lr}            ; (str lr, [sp, #-4]!)
    medusa::MemoryBinaryStream MemBinStrm("\x04\xe0\x2d\xe5", 4);
    medusa::Instruction Insn;
    BOOST_CHECK(pArmDisasm->Disassemble(MemBinStrm, 0x0, Insn, 0));
  }

  delete pArmDisasm;
}

BOOST_AUTO_TEST_CASE(arch_avr8_test_case)
{
}

BOOST_AUTO_TEST_CASE(arch_gameboy_test_case)
{
}

BOOST_AUTO_TEST_CASE(arch_x86_test_case)
{
}

BOOST_AUTO_TEST_SUITE_END()