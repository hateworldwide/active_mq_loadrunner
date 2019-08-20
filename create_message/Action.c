Action()
{
	jms_send_message_queue("step1: send message",
    "Test Message",
    "dynamicQueues\/1");
	return 0;
}
